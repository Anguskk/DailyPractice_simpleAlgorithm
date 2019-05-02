#include "Edge.h"



Edge::Edge()
{

}

void Edge::SetEdge(int u,int v,float w)
{
	this->u=u;
	this->v=v;
	this->weight=w;
}

Edge::~Edge()
{

}

int Edge::either()
{
	return u;
}

int Edge::other(int temp)
{
	if (temp == this->u)
	{
		return v;
	} 
	else
	{
		return u;
	}
}

float Edge::getWeight()
{
	return weight;
}

void Edge::print()
{
	cout<<either()<<"   "<<other(either())<<"  "<<weight<<endl;
}
