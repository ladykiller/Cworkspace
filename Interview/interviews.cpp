#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include "interviews.h"

void createNewArrayWithoutDivision(int* a,int* b,int n){
	int i;
	b[0] = 1;
	for (i = 1; i < n; i++)
		b[i] = b[i - 1] * a[i - 1];
//	int temp = 1;
//	for (i = n - 2; i >= 0; i--)
//	{
//		temp *= a[i + 1];
//		b[i] *= temp;
//	}

    for (i = n - 1; i >= 1; i--)
	{
		b[i] *= b[0];
		b[0] *= a[i];
	}  
}
