#include "Move.hpp"
#include "Generated.hpp"

int movenum=-1; 

void up()
{
	movenum++;
	for(int i=1;i<=N;++i)
	{
		for(int j=N;j>=1;--j)
		{
			if(Map[i][j] != 0)
			{
				for(int k=i;k>=1;--k)
				{
					if(!Map[k][j])
					{
						Map[k][j]=Map[k+1][j];
						Map[k+1][j]=0;
						continue;
					}
					if(Map[k][j]==Map[k+1][j])
					{
						Map[k][j]*=2;
						score+=Map[k][j];
						Max_s=std::max(Max_s,Map[k][j]);
						sum_s--;
						Map[k+1][j]=0;
						break;
					}
				}
			}
		}
	}
	if(sum_s!=N*N)
	{
		sum_s++;
		Generated();
	}
}
void down()
{
	movenum++;
	for(int i=N;i>=1;--i)
	{
		for(int j=1;j<=N;++j)
		{
			if(Map[i][j] != 0)
			{
				for(int k=i;k<=N;++k)
				{
					if(!Map[k][j])
					{
						Map[k][j]=Map[k-1][j];
						Map[k-1][j]=0;
						continue;
					}
					if(Map[k][j] == Map[k-1][j])
					{
						Map[k][j]*=2;
						score+=Map[k][j];
						Max_s=std::max(Max_s,Map[k][j]);
						sum_s--;
						Map[k-1][j]=0;
						break;
					}
				}
			}
		}
	}
	if(sum_s!=N*N)
	{
		sum_s++;
		Generated();
	}
}
void left()
{
	movenum++;
	for(int i=1;i<=N;++i)
	{
		for(int j=1;j<=N;++j)
		{
			if(Map[i][j] != 0)
			{
				for(int k=j;k>=1;--k)
				{
					if(!Map[i][k])
					{
						Map[i][k]=Map[i][k+1];
						Map[i][k+1]=0;
						continue;
					}
					if(Map[i][k]==Map[i][k+1])
					{
						Map[i][k]*=2;
						score+=Map[i][k];
						Max_s=std::max(Max_s,Map[i][k]);
						sum_s--;
						Map[i][k+1]=0;
						break;
					}
				}
			}
		}
	}
	if(sum_s!=N*N)
	{
		sum_s++;
		Generated();
	}
}
void right()
{
	movenum++;
	for(int i=1;i<=N;++i)
	{
		for(int j=N;j>=1;--j)
		{
			if(Map[i][j] != 0)
			{
				for(int k=j;k<=N;++k)
				{
					if(!Map[i][k])
					{
						Map[i][k]=Map[i][k-1];
						Map[i][k-1]=0;
						continue;
					}
					if(Map[i][k] == Map[i][k-1])
					{
						Map[i][k]*=2;
						score+=Map[i][k];
						Max_s=std::max(Max_s,Map[i][k]);
						sum_s--;
						Map[i][k-1]=0;
						break;
					}
				}
			}
		}
	}
	if(sum_s!=N*N)
	{
		sum_s++;
		Generated();
	}
}