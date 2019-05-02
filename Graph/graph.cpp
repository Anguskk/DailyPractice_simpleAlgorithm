#include "graph.h"

Graph::Graph(int v)
{
	this->NodeCnt=v;
	this->adj.resize(v);
}

void Graph::addEdge(int v1,int v2)
{
	this->adj[v1].push_back(v2);
	this->adj[v2].push_back(v1);
}

void Graph::print()
{
	vector<vector<int>>::iterator it;
	vector<int>::iterator it2;
	int i=0;
	for (it=this->adj.begin();it!=this->adj.end();it++,i++)
	{
		cout<<i<<":";
		it2=it->begin();
		for (;it2!=it->end();it2++)
		{
			cout<<*it2<<" ";
		}
		cout<<endl;
	}
}

void Graph::setEdgeCnt(int e)
{
	this->EgdeCnt=e ;
}

std::vector<int> & Graph::adjacent(int v)
{
	return this->adj[v];
}

int Graph::degree(int v)
{
	return this->adjacent(v).size();
}

int Graph::maxDegree()
{
	//·½·¨Ò»
	/*int max=this->adj[0].size();
	for (int i=1;i<this->NodeCnt;i++)
	{
		if (max<this->adj[i].size())
		{
			max=this->adj[i].size();
		}
	}*/
	int max=0;
	for (int i=0;i<this->NodeCnt;i++)
	{
		if(max<this->degree(i)){
			max=this->degree(i);
		}
	}
	return max;
}

Graph::~Graph()
{

}

int Graph::V()
{
	return NodeCnt;
}

int Graph::E()
{
	return EgdeCnt;
}



