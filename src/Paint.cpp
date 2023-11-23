#include "Paint.hpp"

void Paint()
{
	int s=5*N+1-title.size()+4;
	for(int i=1;i<=s/2;++i) std::cout<<' ';
	std::cout<<title;
	for(int i=1;i<=s/2;++i) std::cout<<' ';
	std::cout<<std::endl;
	std::cout<<"score: "<<score<<std::endl;
	std::cout<<"  ";
	for(int i=1;i<=N*5+1;++i) std::cout<<'-';
	std::cout<<std::endl;
	for(int i=1;i<=N;++i)
	{
		std::cout<<"  ";
		std::cout<<'|';
		for(int j=1;j<=N;++j)
		{
			if(Map[i][j])
			{
				std::cout<<std::setw(4)<<Map[i][j];
				std::cout<<'|';
			}
			else std::cout<<"    |";
		}
		std::cout<<std::endl;
		std::cout<<"  ";
		for(int i=1;i<=N*5+1;++i) std::cout<<'-';
		std::cout<<std::endl;
	}
}