#include "freeMap.h"

void freeMap()
{
	for(int i=0;i<N+2;++i) delete[] Map[i];
	delete[] Map;
}