#include "kruskalMST.h"
#include <iterator>

KruskalMST::KruskalMST()
{
	
}

KruskalMST::KruskalMST(EdgeWeightGraph &EdgeGraph)
{
	std::priority_queue<Edge> pq;
	UnionFind uf=UnionFind(EdgeGraph.V());
	vector<Edge>::iterator it=EdgeGraph.visitAllEdges().begin();
	for (;it!=EdgeGraph.visitAllEdges().end();it++)
	{
		pq.push(*it);
	}
	while (!pq.empty() && MST.size()<EdgeGraph.V()-1)
	{
		Edge &e= pq.top();
		int u=e.either();
		int v=e.other(u);
		if (!uf.connected(u,v))
		{
			MST.push_back(e);
			uf.DoUnion(u,v);
		} 
		pq.pop();
	}

}

KruskalMST::~KruskalMST()
{
	//成员函数和析构函数里面不能调用 delete(this)，this指针无法找到
}

void KruskalMST::print()
{
	vector<Edge>::iterator it=MST.begin();
	for (;it!=MST.end();it++)
	{
		it->print();
	}
}
