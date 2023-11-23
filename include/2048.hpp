#ifndef H_2048
#define H_2048
#include<string>

void freeMap(); 
void paint(); 
void run(); 
void test(); 
void Hide(); 
void Generated(); 
void Initializing(std::string T,int size); 

extern int **Map; //地图
extern std::string title; //游戏名字
extern int score; //分数
extern int Max_s; //场上最高方块(_s:方块)
extern int sum_s; //一共的方块总数
extern int N; //地图大小
extern int movenum; //移动次数

#endif