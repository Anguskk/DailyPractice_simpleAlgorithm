#ifndef BFS_H
#define BFS_H

#include <iostream>
#include "graph.h"
using namespace std;
#include <vector>
#include <queue>
class BFS
{
public:
	BFS(Graph g,int s);
	~BFS();
	void print();
protected:
	
private:
	vector<bool> marked;
	vector<int> edgeTo;
	void visit(Graph g,int s);
};

#endif
