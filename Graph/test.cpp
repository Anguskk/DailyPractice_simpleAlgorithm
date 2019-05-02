//#include "graph.h"
#include "DFS.h"
#include "BFS.h"
#include <stdio.h>
using namespace std;
#include <fstream>
#include <string>
#include "EdgeWeightGraph.h"
#include "kruskalMST.h"
#include "PrimLazyMST.h"
void BFSTest(){
	/*int v,e;	
	fscanf(fp,"%d %d",&v,&e);
	Graph g=Graph(v);
	g.setEdgeCnt(e);
	int v1,v2;
	for (int i=0;i<e;i++)
	{
	fscanf(fp,"%d %d",&v1,&v2);
	g.addEdge(v1,v2);
	}
	fclose(fp);
	g.print();
	vector<int> tempNode;
	tempNode=g.adjacent(9);
	int maxd;
	maxd=g.maxDegree();
	DFS dfs=DFS(g,0);
	dfs.print();

	BFS bfs=BFS(g,0);
	bfs.print();*/
}	
void MSTTest(FILE *fp){
	int v,e;
	fscanf(fp,"%d %d",&v,&e);
	EdgeWeightGraph   EWG=EdgeWeightGraph(v,e);
	int v1,v2;
	float w;
	for (int i=0;i<e;i++)
	{
		fscanf(fp,"%d-%d %f",&v1,&v2,&w);
		EWG.AddWeightedEdge(v1,v2,w);
	}
	fclose(fp);
	//KruskalMST kruMST=KruskalMST(EWG);
	//kruMST.print();
	PrimLazyMST priMST=PrimLazyMST(EWG);
	//priMST.doPrim(0);
	for (int i=0;i<EWG.V();i++)
	{
		priMST.checkWeight(i);

	}	
};
int main(int argc,char *argv[]){
	FILE *fp;
	//char * ct="D:\\Develop\\WorkSpace\\CProject\\dailyPractice\\Algorithm\\GraphTest\\data.txt";
	char *ct = "MSTdata.txt";
	//打开文件，可能会有Bug
	fp=fopen(argv[1],"r");
	if(fp == NULL){
		printf("fail to open the file! \n");
		system("pause");
	}	
	 
	MSTTest(fp);
	
	system("pause");
	return 0;
}
