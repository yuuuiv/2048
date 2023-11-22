#include "move.h"

void up()
{
    movenum++; 
    for(int i=1;i<=N;++i)
    {
        int k=1; 
        for(int j=2;j<=N;++j)
        {
            if(Map[j][i])
            {
                if(Map[k][i]==Map[j][i])
                {
                    Map[k][i]*=2; 
                    score+=Map[k][i]; 
                    if(Map[k][i]>Max_s) Max_s=Map[k][i]; 
                    Map[j][i]=0; 
                    ++k; 
                }
                else if(Map[k][i]==0)
                {
                    Map[k][i]=Map[j][i]; 
                    Map[j][i]=0; 
                }
                else
                {
                    ++k; 
                    if(k!=j)
                    {
                        Map[k][i]=Map[j][i]; 
                        Map[j][i]=0; 
                    }
                }
            }
        }
    }
}
void down()
{
    movenum++; 
    for(int i=1;i<=N;++i)
    {
        int k=N; 
        for(int j=N-1;j>=1;--j)
        {
            if(Map[j][i])
            {
                if(Map[k][i]==Map[j][i])
                {
                    Map[k][i]*=2; 
                    score+=Map[k][i]; 
                    if(Map[k][i]>Max_s) Max_s=Map[k][i]; 
                    Map[j][i]=0; 
                    --k; 
                }
                else if(Map[k][i]==0)
                {
                    Map[k][i]=Map[j][i]; 
                    Map[j][i]=0; 
                }
                else
                {
                    --k; 
                    if(k!=j)
                    {
                        Map[k][i]=Map[j][i]; 
                        Map[j][i]=0; 
                    }
                }
            }
        }
    }
}
void left()
{
    movenum++; 
    for(int i=1;i<=N;++i)
    {
        int k=1; 
        for(int j=2;j<=N;++j)
        {
            if(Map[i][j])
            {
                if(Map[i][k]==Map[i][j])
                {
                    Map[i][k]*=2; 
                    score+=Map[i][k]; 
                    if(Map[i][k]>Max_s) Max_s=Map[i][k]; 
                    Map[i][j]=0; 
                    ++k; 
                }
                else if(Map[i][k]==0)
                {
                    Map[i][k]=Map[i][j]; 
                    Map[i][j]=0; 
                }
                else
                {
                    ++k; 
                    if(k!=j)
                    {
                        Map[i][k]=Map[i][j]; 
                        Map[i][j]=0; 
                    }
                }
            }
        }
    }
}
void right()
{
    movenum++; 
    for(int i=1;i<=N;++i)
    {
        int k=N; 
        for(int j=N-1;j>=1;--j)
        {
            if(Map[i][j])
            {
                if(Map[i][k]==Map[i][j])
                {
                    Map[i][k]*=2; 
                    score+=Map[i][k]; 
                    if(Map[i][k]>Max_s) Max_s=Map[i][k]; 
                    Map[i][j]=0; 
                    --k; 
                }
                else if(Map[i][k]==0)
                {
                    Map[i][k]=Map[i][j]; 
                    Map[i][j]=0; 
                }
                else
                {
                    --k; 
                    if(k!=j)
                    {
                        Map[i][k]=Map[i][j]; 
                        Map[i][j]=0; 
                    }
                }
            }
        }
    }
}