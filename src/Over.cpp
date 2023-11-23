#include "Over.hpp"

bool Over()
{
	for(int i=1;i<=N;++i)
	{
		for(int j=1;j<=N;++j)
		{
			if(Map[i][j] == Map[i-1][j] || Map[i][j] == Map[i][j-1] || Map[i][j] == Map[i][j+1] || Map[i][j] == Map[i+1][j])
				return 0;
		}
	}
	return 1;
}