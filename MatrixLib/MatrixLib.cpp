// This is the main DLL file.

#include "stdafx.h"

#include "MatrixLib.h"
#include <iostream>

using namespace std;

namespace MatrixLib
{
		int** Class1::addition(int x[3][3], int y[3][3]){
			int** z = new int*[3];
			// Adding Both Matrices
			for (int i = 0; i<3; i++)
			{
				for (int j = 0; j<3; j++)
					z[i][j] = x[i][j] + y[i][j];
			}
			return z;
		}

		int** Class1::subtract(int x[3][3], int y[3][3]){                // Subtarction Function implementation
			int** z = new int*[3];
			int i, j;
			
			for (i = 0; i<3; i++)
			{
				for (j = 0; j<3; j++)
					z[i][j] = x[i][j] - y[i][j];
			}
			
			return z;
		}
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

	int** Class1::inverse(int a[3][3])
	{
		int r = 3; int c = 3; int** trans = new int*[3];
		for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
		{
			trans[j][i] = a[i][j];

		}
		return trans;


	}
}