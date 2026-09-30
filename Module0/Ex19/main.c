#include <stdio.h>
#include "matrix.h"

int main(void)
{
	int mat[5][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12},
		{13, 14, 15}
	};

	printf("sum_matrix_values(mat) = %d\n", sum_matrix_values(mat));

	return 0;
}
