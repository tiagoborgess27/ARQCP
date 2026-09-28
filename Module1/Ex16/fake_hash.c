#include "fake_hash.h"

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
