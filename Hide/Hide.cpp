#include "Hide.h"

void Hide()
{//用于隐藏控制台光标 
    HANDLE hOut; 
    CONSOLE_CURSOR_INFO	curInfo; 
    hOut=GetStdHandle(STD_OUTPUT_HANDLE); 
    curInfo.dwSize=1; 
    curInfo.bVisible=0; 
    SetConsoleCursorInfo(hOut,&curInfo); 
}