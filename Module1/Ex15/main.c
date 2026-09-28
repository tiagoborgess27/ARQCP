#include <stdio.h>
#include "count_words.h"

int main(void)
{
	char str[] = "ola Pedro ola Laura";

	printf("str = \"%s\"\n", str);
	printf("count_words(str) = %d\n", count_words(str));

	return 0;
}
