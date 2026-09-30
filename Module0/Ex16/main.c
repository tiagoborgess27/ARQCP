#include <stdio.h>
#include "fake_hash.h"

int main(void)
{
	char str[] = "hello";

	printf("str = %s\n", str);
	printf("fake_hash(str) = %d\n", fake_hash(str));

	return 0;
}
