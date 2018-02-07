// This is the main DLL file.

#include "stdafx.h"

#include "MatrixLib.h"

namespace MatrixLib
{
	int** Class1::multiply(int a[3][3], int b[3][3])
	{
		int** resultarray = 0;
		resultarray = new int*[3];
		for (int i = 0; i < 3; i++)
		{
			resultarray[i] = new int[3];
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				resultarray[i][j] = 0;
				for (int k = 0; k < 3; k++)
				{
					resultarray[i][j] = resultarray[i][j] + a[i][k] * b[k][j];
				}
			}
		}
		return resultarray;
	}
}