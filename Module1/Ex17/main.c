#include <stdio.h>
#include "check_string.h"

int main(void)
{
	char str[] = "hello";
	int h = fake_hash(str);

	printf("str = %s, hash = %d\n", str, h);
	printf("check_string(str, %d) = %d\n", h, check_string(str, h));
	printf("check_string(str, %d) = %d\n", h + 1, check_string(str, h + 1));

	return 0;
}
