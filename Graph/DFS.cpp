#include "DFS.h"

DFS::DFS(Graph g,int s)
{
	marked.resize(g.V(),false);
	edgeTo.resize(g.V(),-1);
	this->visit(g,s);
	//marked.assign(marked.size(),false);
}


DFS::~DFS()
{

}

void DFS::print()
{
	cout<<"���ʽڵ���Ϣ��"<<endl;

	for (int i=0;i<this->marked.size();i++)
	{
		cout<<i<<" : "<<marked[i]<<endl;
	}
	cout<<endl<<"��ӡ·����Ϣ"<<endl;
	for (int i=0;i<this->edgeTo.size();i++)
	{
		cout<<i<<":"<<edgeTo[i]<<endl;
	}

}

void DFS::visit(Graph g,int s)
{
	marked[s]=true;
	//edgeTo.push_back(s);
	vector<int> &temp_Node = g.adjacent(s);
	vector<int>::iterator it=temp_Node.begin();
	for (;it!=temp_Node.end();it++)
	{
		if (!marked[*it])
		{
			edgeTo[*it]= s; 
			visit(g,*it);
		} 

	}
}


