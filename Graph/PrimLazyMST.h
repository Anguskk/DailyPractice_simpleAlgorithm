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
	//��һ������
	EdgeWeightGraph pwg;
public:
	void visit(int v);
	void print();
	//��v����
	void doPrim(int v);
	PrimLazyMST();
	//�Ӳ�ͬ�ĳ�������������õ���ͼȨ���Ƿ���ͬ
	void checkWeight(int i);
	PrimLazyMST(EdgeWeightGraph &wg);
	~PrimLazyMST();
protected:
	

};