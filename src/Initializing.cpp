#include "Initializing.hpp"

int **Map; //地图
std::string title; //游戏名字
int score; //分数
int Max_s; //场上最高方块(_s:方块)
int sum_s; //一共的方块总数
int N; //地图大小

void Initializing(std::string T,int size)
{
	N=size; 
	title=T; 
	score=0; 
	Max_s=0; 
	sum_s=0; 
	Map=new int*[N+2]; 
	for(int i=0;i<N+2;++i)
		Map[i]=new int[N+2]; 
	for(int i=1;i<=N;++i)
		for(int j=1;j<=N;++j)
			Map[i][j]=0; 
}