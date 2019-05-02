#include "Union_Find.h"



UnionFind::UnionFind()
{

}

UnionFind::UnionFind(int V)
{
	V_track.resize(V,-1);
	cc.resize(V,-1);
	_Cntofcc.resize(V,0);
	_No=0;
}
//可以考虑写成树的结构，查找的时候有LogN的效率 ，要考虑两棵树的合并
//合并连通集
void UnionFind::DoUnion(int u,int v)
{
	V_track[u]=v;
	if (cc[u]==-1 && cc[v]==-1)
	{
		_No = _No+1;
		cc[u]=_No;
		cc[v]=_No;
		_Cntofcc[_No] +=2;
		//V_track[u]=v;
	} 
	else if (cc[u]==-1 || cc[v]==-1)
	{
		cc[u]=_No;
		cc[v]=_No;
		_Cntofcc[_No] +=1;
		//V_track[u]=v;
	}else{
		//V_track[u]=v;
		if (_Cntofcc[cc[u]]>_Cntofcc[cc[v]])
		{
			for (int i=0;i<cc.size();i++)
			{
				if (cc[i]==cc[v])
				{
					cc[i]=cc[u];
				}
			}
		} 
		else
		{
			for (int i=0;i<cc.size();i++)
			{
				if (cc[i]==cc[u])
				{
					cc[i]=cc[v];
				}
			}
		}

	}
	
}

bool UnionFind::connected(int u,int v)
{
	if (cc[u]==-1 && cc[v]==-1)
	{
		return false;
	}
	else{
		return cc[u] == cc[v];
	}
	/*int p=u,q=v;
	while (V_track[p]!=-1)
	{
		p=V_track[p];
	}
	while (V_track[q]!=-1)
	{
		q=V_track[q];
	}
	
		return p==q;*/
	
}

UnionFind::~UnionFind()
{

}
