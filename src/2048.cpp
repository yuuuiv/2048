#include "2048.hpp"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>

using namespace std;

int **Map; //地图
std::string title; //游戏名字
int score; //分数
int Max_s; //场上最高方块(_s:方块)
int sum_s; //一共的方块总数
int N; //地图大小
int movenum = -1; //移动次数

void freeMap()
{
	for(int i=0;i<N+2;++i) delete[] Map[i];
	delete[] Map;
}

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

void Hide()
{//用于隐藏控制台光标 
    HANDLE hOut; 
    CONSOLE_CURSOR_INFO	curInfo; 
    hOut=GetStdHandle(STD_OUTPUT_HANDLE); 
    curInfo.dwSize=1; 
    curInfo.bVisible=0; 
    SetConsoleCursorInfo(hOut,&curInfo); 
}

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
			Map[i][j]=1; 
}

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

bool over()
{
	for(int i=1;i<=N;++i)
	{
		for(int j=1;j<=N;++j)
		{
			if(Map[i][j] == Map[i-1][j] || Map[i][j] == Map[i][j-1] || Map[i][j] == Map[i][j+1] || Map[i][j] == Map[i+1][j])
				return 0; 
		}
	}
	return 1; 
}

void paint()
{
    system("cls");
    cout<<title<<endl;
    cout<<"Score: "<<score<<endl;
    cout<<"Max: "<<Max_s<<endl;
    cout<<"Sum: "<<sum_s<<endl;
    for(int i=1;i<=N;++i)
    {
        for(int j=1;j<=N;++j)
        {
            if(Map[i][j]==0)
                cout<<"     ";
            else
            {
                int k=Map[i][j];
                int len=0;
                while(k)
                {
                    k/=10;
                    ++len;
                }
                for(int k=0;k<4-len;++k)
                    cout<<" ";
                cout<<Map[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void run()
{
	system("title 2048"); //设置窗口名称
	// Hide();
	while(1)
	{
		if(sum_s == N*N && over())
		{
            cout<<"You lose! You got "<<score<<"point."<<endl;
            cout<<"You have made "<<movenum<<" moves."<<endl;
			system("pause");
			return;
		}
		if(Max_s == 2048)
		{
			cout<<"You win!";
			system("pause");
			return;
		}
		paint();
		test();
		system("cls");
	}
	freeMap(); 
}

void test()
{
	int key=getch();
    cout<<key<<endl;
    system("pause");
	if(key == 0 || key == 224) key=getch();  
	if(key == 'W' || key == 'w' || key == 72) up(); 
	if(key == 'S' || key == 's' || key == 80) down(); 
	if(key == 'A' || key == 'a' || key == 75) left(); 
	if(key == 'D' || key == 'd' || key == 77) right(); 
}