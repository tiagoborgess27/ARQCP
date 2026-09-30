#include <stdio.h>
#include "real_number.h"

int main(void)
{
	char x[] = "123.456";
	int x_int = integer_part(x);  /* assigns 123 to x_int */
	int x_frac = fractional_part(x);  /* assigns 456 to x_frac */

	printf("x = %s\n", x);
	printf("integer_part(x) = %d\n", x_int);
	printf("fractional_part(x) = %d\n", x_frac);

	return 0;
}
