#include "matrix.h"

int sum_matrix_values(int mat[5][3])
{
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
			total += mat[i][j];
	}

	return total;
}
