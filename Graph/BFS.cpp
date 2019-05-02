#include "BFS.h"


BFS::BFS(Graph g,int s)
{
	marked.resize(g.V(),false);
	edgeTo.resize(g.V(),-1);
	this->visit(g,s);
}

BFS::~BFS()
{

}

void BFS::print()
{
	cout<<"BFS访问节点信息："<<endl;

	for (int i=0;i<this->marked.size();i++)
	{
		cout<<i<<" : "<<marked[i]<<endl;
	}
	cout<<endl<<"打印路径信息"<<endl;
	for (int i=0;i<this->edgeTo.size();i++)
	{
		cout<<i<<":"<<edgeTo[i]<<endl;
	}
}

void BFS::visit(Graph g,int s)
{
	vector<int>::iterator it;
	queue<int> q=queue<int>();
	q.push(s);
	marked[s] =true;
	while (!q.empty())
	{
		int temp=q.back();
		q.pop();
		vector<int> &vec =g.adjacent(temp);
		for (int i=0;i<vec.size();i++)
		{
			if(!marked[vec[i]]){
				q.push(vec[i]);
				marked[vec[i]]= true;
				edgeTo[vec[i]]=temp;
			}
		}

	}
}


