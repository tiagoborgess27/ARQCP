#include "triangular_matrix.h"

int check_lower_triangular_matrix(int mat[][5], int lin, int col)
{
	for (int i = 0; i < lin; i++)
	{
		for (int j = i + 1; j < col; j++)
		{
			if (mat[i][j] != 0)
				return 0;
		}
	}
	return 1;
}

int sum_lower_triangular_matrix(int mat[][5], int lin)
{
	if (!check_lower_triangular_matrix(mat, lin, 5))
		return -1;

	int total = 0;
	for (int i = 0; i < lin; i++)
	{
		for (int j = 0; j < 5; j++)
			total += mat[i][j];
	}

	return total;
}
