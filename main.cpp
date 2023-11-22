#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#include "Initializing.h"
#include "Hide.h"
#include "Paint.h"
#include "over.h"
#include "Generated.h"
#include "move.h"
#include "test.h"
#include "freeMap.h"
#include "run.h"
using namespace std; 

int **Map; //地图
string title; //游戏名字
int score; //分数
int Max_s; //场上最高方块(_s:方块)
int sum_s; //一共的方块总数
int N; //地图大小
int movenum=-1; //移动次数

int main()
{
    int size; 
    cout<<"Please input the size of the map: "; 
    cin>>size; 
    system("pause"); 
    Initializing("2048 games", size); 
    run(); 
    return 0; 
}