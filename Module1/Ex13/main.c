#include <stdio.h>
#include "count_char.h"

int main(void)
{
	char str[] = "banana";

	printf("str = %s\n", str);
	printf("count_char(str, 'a') = %d\n", count_char(str, 'a'));
	printf("count_char(str, 'n') = %d\n", count_char(str, 'n'));
	printf("count_char(str, 'z') = %d\n", count_char(str, 'z'));

	return 0;
}
