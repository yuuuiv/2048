#include "test.h"
void test()
{
	int key=getch();
	if(key == 0 || key == 224) key=getch();  
	if(key == 'W' || key == 'w' || key == 72) up(); 
	if(key == 'S' || key == 's' || key == 80) down(); 
	if(key == 'A' || key == 'a' || key == 75) left(); 
	if(key == 'D' || key == 'd' || key == 77) right(); 
}