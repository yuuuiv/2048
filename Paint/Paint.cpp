#include "Paint.h"

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
                cout<<"    ";
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