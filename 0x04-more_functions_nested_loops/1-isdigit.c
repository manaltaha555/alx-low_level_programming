#include"main.h"
int _isdigit(int c)
{
	int i;

	for(i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
