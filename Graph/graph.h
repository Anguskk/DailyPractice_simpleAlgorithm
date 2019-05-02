#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <iostream>
using namespace std;
class Graph
{
public:
	//Graph();
	Graph(int v);
	int V();
	int E();
	void addEdge(int v1,int v2);
	void print();
	void setEdgeCnt(int e);
	vector<int> & adjacent(int v);
	int degree(int v);
	int maxDegree();
	~Graph();
protected:
	
private:
	int NodeCnt;
	int EgdeCnt;
	vector<vector<int>> adj;


	
};
#endif

