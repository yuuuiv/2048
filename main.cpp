#include <iostream>
#include <windows.h>
#include <conio.h>
#include "2048.hpp"
using namespace std; 

int main()
{
    int size; 
    cout<<"Please input the size of the map: "; 
    cin>>size; 
    system("pause"); 
    Initializing("2048 games", size); 
	cout << "Initializing..." << endl;
    system("pause");
    run(); 
    return 0; 
}