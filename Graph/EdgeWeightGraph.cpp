#include "EdgeWeightGraph.h"

int EdgeWeightGraph::V()
{
	return NodeCnt;
}

int EdgeWeightGraph::E()
{
	return EgdeCnt;
}


EdgeWeightGraph::EdgeWeightGraph()
{

}

EdgeWeightGraph::EdgeWeightGraph(int v,int e)
{
	this->EgdeCnt=e;	
	this->NodeCnt=v;
	adjEdge.resize(v);
}

std::vector<Edge> & EdgeWeightGraph::visitAllEdges()
{
	return allEdges;
}

std::vector<Edge *> & EdgeWeightGraph::visitAdjEdges(int v)
{
	return adjEdge[v];
}

EdgeWeightGraph::~EdgeWeightGraph()
{

}

void EdgeWeightGraph::AddWeightedEdge(int u,int v,float w)
{
	Edge *pedge=new Edge;
	pedge->SetEdge(u,v,w);
	adjEdge[u].push_back(pedge);
	adjEdge[v].push_back(pedge);
	allEdges.push_back(*pedge);
}
