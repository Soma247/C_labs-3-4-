// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.


#include "stdafx.h"
#include <math.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{

	setlocale(LC_ALL, "Russian");
	const int N = 7;
	int i(0), j(0), t(0), n(0), n1(0);
	int a[N] = {0};
	int b[N] = {0};
	srand(time(NULL));
	for (i = 0; i<N; i++)
	{
		a[i] = (rand() % 8)+1;
		printf("\n\t A= %d", a[i]);
		b[i] = a[i];
	}
	while (j<N)
	{
		for (i=N; i > j; i--)
		{
			if (a[i] == a[j]){ a[i] = 0; }
			else { ; }
		}
		j++;
	}

	for (i = 0,j=0; i < N; i++)
	{
		if (a[i] != 0){ b[j] = a[i]; j++; n1 = j; }
		else { ; }
	}
	

	for (i = 0; i < n1; i++)
	{
		printf("\n\t b= %d", b[i]);
	}
	_getch();
	return 0;
}
