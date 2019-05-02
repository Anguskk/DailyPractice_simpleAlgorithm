#pragma once
using namespace std;
#include <iostream>
class Edge
{
private:
	// two vertex  u and v
	int u,v;
	//ШЈжи
	float weight;
	
public:
	bool operator<(const Edge &e2)const {
		return weight>e2.weight;
	}
	
	Edge();
	void SetEdge(int u,int v,float w);
	~Edge();
	int either();
	int other(int temp);
	float getWeight();
	void print();
protected:
	
};