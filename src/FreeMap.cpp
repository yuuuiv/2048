#include "FreeMap.hpp"

void FreeMap()
{
	for(int i=0;i<N+2;++i) delete[] Map[i]; 
	delete[] Map; 
}