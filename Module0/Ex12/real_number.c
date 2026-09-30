#include "real_number.h"

int string_to_int(char str[])
{
	int result = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		result = result * 10 + str[i] - '0';
	}
	return result;
}

int integer_part(char x[])
{
	char buffer[50];
	int i = 0;
	while (x[i] != '.' && x[i] != '\0')
	{
		buffer[i] = x[i];
		i++;
	}
	buffer[i] = '\0';
	return string_to_int(buffer);
}

int fractional_part(char x[])
{
	int i = 0;
	while (x[i] != '.' && x[i] != '\0')
		i++;
	if (x[i] == '.')
		i++;
	return string_to_int(&x[i]);
}
