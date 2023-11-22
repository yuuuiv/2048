#include"Generated.h"

void Generated()
{
	srand(time(0));
	int x=rand()%N+1,y=rand()%N+1;
	while(Map[x][y] != 0) x=rand()%N+1,y=rand()%N+1;
	Map[x][y]=2;
	int z=rand()%100;
	if(z>80){
    Map[x][y]+=2;
	}
}