#include "PrimLazyMST.h"



void PrimLazyMST::visit(int v)
{
	marked[v]=true;
	vector<Edge *> & tadj =pwg.visitAdjEdges(v);
	for (int i=0;i<tadj.size();i++)
	{
		pq.push(*tadj[i]);
	}
}

void PrimLazyMST::print()
{
	//
}

void PrimLazyMST::doPrim(int v)
{
	visit(v);
	while (!pq.empty())
	{
		Edge &e=pq.top();
		int v1=e.either();
		int v2=e.other(v1);
		if(marked[v1] && marked[v2]){
			pq.pop();
			continue;
		} 
		mST.push(e);
		pq.pop();
		if(!marked[v1]) visit(v1);
		else visit(v2);
	}
	//marked.resize(pwg.V(),false);
}

PrimLazyMST::PrimLazyMST(EdgeWeightGraph &wg)
{
	marked.resize(wg.V(),false);
	pwg=wg;	
}

void PrimLazyMST::checkWeight(int i)
{
		float sum=0.0;
		for (int i=0;i<pwg.V();i++)
		{
			marked[i]=false;
		}
		doPrim(i);
		while (!mST.empty())
		{
			sum += mST.front().getWeight();
			mST.pop();
		}
		cout<<"从第"<<i<<"个点出发得到的图权重为:"<<sum<<endl;
		
		
	
}

PrimLazyMST::~PrimLazyMST()
{

}
