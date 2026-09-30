#include <stdio.h>

int sum(int a, int b);
int mul(int a, int b);
int sumdigits(int n);
int cmp(int a, int b);
int get_greater_digit(int n);
int get_ascii_code(char c);
char get_ascii_char(int code);

int main(void)
{
	printf("char: %zu bytes\n", sizeof(char));
	printf("int: %zu bytes\n", sizeof(int));
	printf("unsigned int: %zu bytes\n", sizeof(unsigned int));
	printf("long: %zu bytes\n", sizeof(long));
	printf("short: %zu bytes\n", sizeof(short));
	printf("long long: %zu bytes\n", sizeof(long long));
	printf("float: %zu bytes\n", sizeof(float));
	printf("double: %zu bytes\n", sizeof(double));

	printf("\nsum(3, 4) = %d\n", sum(3, 4));
	printf("mul(3, 4) = %d\n", mul(3, 4));
	printf("sumdigits(1234) = %d\n", sumdigits(1234));
	printf("cmp(2, 5) = %d\n", cmp(2, 5));
	printf("get_greater_digit(4829) = %d\n", get_greater_digit(4829));
	printf("get_ascii_code('a') = %d\n", get_ascii_code('a'));
	printf("get_ascii_char(97) = %c\n", get_ascii_char(97));

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	int result = 0;
	for (int i = 0; i < b; i++)
	{
		result = sum(result, a);
	}
	return result;
}

int sumdigits(int n)
{
	int total = 0;
	while (n > 0)
	{
		int digit = n % 10;
		total = sum(total, digit);
		n /= 10;
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

int get_greater_digit(int n)
{
	int greater_digit = 0;
	while (n > 0)
	{
		int digit = n % 10;
		if (cmp(digit, greater_digit) > 0)
			greater_digit = digit;
		n /= 10;
	}
	return greater_digit;
}

int get_ascii_code(char c)
{
	return (int)c;
}

char get_ascii_char(int code)
{
	return (char)code;
}