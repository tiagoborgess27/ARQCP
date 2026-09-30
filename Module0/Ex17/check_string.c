#include "check_string.h"

int sum(int a, int b)
{
	return a + b;
}

int get_ascii_code(char c)
{
	return (int)c;
}

int fake_hash(char str[])
{
	int total = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		total = sum(total, get_ascii_code(str[i]));
	}
	return total;
}

int cmp(int a, int b)
{
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}

int check_string(char str[], int h)
{
	return cmp(fake_hash(str), h) == 0 ? 1 : 0;
}
