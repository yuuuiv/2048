#include "run.h"

void run()
{
	system("title 2048"); //设置窗口名称
	Hide();
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