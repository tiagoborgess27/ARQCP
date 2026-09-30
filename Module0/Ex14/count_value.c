#include "count_value.h"

int cmp(int a, int b)
{
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}

int count_value(int vec[], int n, int value)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (cmp(vec[i], value) == 0)
			count++;
	}
	return count;
}
