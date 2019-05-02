#include "EdgeWeightGraph.h"
#include <iostream>
#include <queue>
#include <vector>
#include "Edge.h"
using namespace std;

class PrimLazyMST{
private:
	queue<Edge> mST;
	//vector<vector<Edge*>> adjEdge;
	vector<bool> marked;
	priority_queue<Edge> pq;
	//加一波好友
	EdgeWeightGraph pwg;
public:
	void visit(int v);
	void print();
	//从v出发
	void doPrim(int v);
	PrimLazyMST();
	//从不同的出发点出发，最后得到的图权重是否相同
	void checkWeight(int i);
	PrimLazyMST(EdgeWeightGraph &wg);
	~PrimLazyMST();
protected:
	

};