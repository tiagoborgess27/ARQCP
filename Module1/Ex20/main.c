#include <stdio.h>
#include "triangular_matrix.h"

int main(void)
{
	int a[][5] = {
		{1, 0, 0, 0, 0},
		{4, 5, 0, 0, 0},
		{7, 8, 9, 0, 0},
		{1, 1, 1, 1, 0},
		{2, 2, 2, 2, 2}
	};
	int b[][5] = {
		{1, 0, 0, 0, 0},
		{4, 5, 3, 0, 0},
		{7, 8, 9, 0, 0},
		{1, 1, 1, 1, 0},
		{2, 2, 2, 2, 2}
	};

	printf("check_lower_triangular_matrix(a) = %d\n", check_lower_triangular_matrix(a, 5, 5));
	printf("sum_lower_triangular_matrix(a) = %d\n", sum_lower_triangular_matrix(a, 5));

	printf("check_lower_triangular_matrix(b) = %d\n", check_lower_triangular_matrix(b, 5, 5));
	printf("sum_lower_triangular_matrix(b) = %d\n", sum_lower_triangular_matrix(b, 5));

	return 0;
}
