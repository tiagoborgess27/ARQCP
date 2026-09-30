#include "find_pattern.h"

int cmp(int a, int b)
{
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}

int find_pattern(char str[], char patt[])
{
	int count = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		int j = 0;
		while (patt[j] != '\0' && cmp(str[i + j], patt[j]) == 0)
			j++;

		if (patt[j] == '\0')
			count++;
	}

	return count;
}
