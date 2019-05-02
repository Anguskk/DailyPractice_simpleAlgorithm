#pragma once
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <iterator>
#include "Union_Find.h"
#include "Edge.h"
#include "EdgeWeightGraph.h"
using namespace std;
class KruskalMST
{
private:
	vector<Edge >  MST;
	//std::priority_queue<Edge> pq;
public:
	KruskalMST();
	KruskalMST(EdgeWeightGraph &EdgeGraph);
	~KruskalMST();
	void print();
protected:
	

};