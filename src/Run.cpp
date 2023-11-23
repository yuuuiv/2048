#include "Run.hpp"
#include "Hide.hpp"
#include "Over.hpp"
#include "Paint.hpp"
#include "Test.hpp"
#include "FreeMap.hpp"

void run()
{
    system("title 2048"); //设置窗口名称
    Hide();
    while(1)
    {
        if(sum_s == N*N && Over())
        {
            std::cout<<"You lose! You got "<<score<<"point."<<std::endl;
            std::cout<<"You have made "<<movenum<<" moves."<<std::endl;
            system("pause");
            break;
        }
        if(Max_s == 2048)
        {
            std::cout<<"You win!";
            system("pause");
            break;
        }
        Paint();
        test();
        system("cls");
    }
    FreeMap(); 
}