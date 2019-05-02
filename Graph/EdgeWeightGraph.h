#pragma  once
#include <iostream>
#include <vector>
#include "Edge.h"
using namespace std;
class EdgeWeightGraph
{
private:
	int NodeCnt;
	int EgdeCnt;
	vector<vector<Edge *>> adjEdge;
	vector<Edge >  allEdges;
	
public:
	int V();
	int E();
	
	EdgeWeightGraph();
	EdgeWeightGraph(int v,int e);
	vector<Edge> &  visitAllEdges();
	vector<Edge *> & visitAdjEdges(int v);
	~EdgeWeightGraph();
	void AddWeightedEdge(int u,int v,float w);
protected:
	

};