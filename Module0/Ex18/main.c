#include <stdio.h>
#include "find_pattern.h"

int main(void)
{
	int x = find_pattern("ola Pedro, ola Laura", "la");  /* x = 2 */

	printf("x = %d\n", x);

	return 0;
}
