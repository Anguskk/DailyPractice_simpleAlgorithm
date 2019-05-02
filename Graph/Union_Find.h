#pragma once
#include <vector>
using namespace std;
class UnionFind
{
private:
	vector<int> V_track;
	vector<int>	cc;
	vector<int> _Cntofcc;
	int _No;
public:
	UnionFind();
	UnionFind(int V);
	void DoUnion(int u,int v);
	bool connected(int u,int v);
	~UnionFind();
protected:
	

};
