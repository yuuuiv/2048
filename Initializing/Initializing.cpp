#include "Initializing.h"

void Initializing(string T,int size)
{
	N=size;
	title=T;
	score=0;
	Max_s=0;
	sum_s=0;
	Map = new int*[N+2];
	for(int i = 0; i < N+2; i++)
		Map[i] = new int[N+2];
	for(int i=1;i<=N;++i)
		for(int j=1;j<=N;++j)
			Map[i][j]=0; 
}