#ifndef DFS_H
#define DFS_H

#include <iostream>
#include "graph.h"
using namespace std;
#include <vector>
class DFS
{
public:
	DFS(Graph g,int s);
	~DFS();
	void print();

private:
	vector<bool> marked;
	vector<int> edgeTo;
	void visit(Graph g,int s);
};
#endif

