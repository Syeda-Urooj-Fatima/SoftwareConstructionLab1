// LabClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  
#include "MatrixLib.h"  

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x[3][3], y[3][3];
	cout << "ENTER ELEMENTS OF 1st MATRIX\n";
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
			cin >> x[i][j];
	}

	cout << "ENTER ELEMENTS OF 2nd MATRIX\n";
	//2nd Matrix
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
			cin >> y[i][j];
	}

	MatrixLib::Class1::addition(x, y);
	
	return 0;
}

  

