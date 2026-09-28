#include <stdio.h>
#include "count_value.h"

int main(void)
{
	int vec[] = {1, 2, 3, 2, 4, 2, 5};
	int n = sizeof(vec) / sizeof(vec[0]);

	printf("count_value(vec, n, 2) = %d\n", count_value(vec, n, 2));
	printf("count_value(vec, n, 9) = %d\n", count_value(vec, n, 9));

	return 0;
}
