#include <iostream>
#include <stdlib.h> 
#include "quick_sort.h"
#include"basic_define.h"
using namespace std;



int main()
{
	int a[10];
	//int length;
	//GET_ARRAY_LENGTH(a,length);
	for (int i = 0; i < 10; i++)
	{
		a[i] = 50 ;
		cout << a[i] << " ";
	}
	//Caonima
	cout <<endl;
	for (int j = 0; j < 10; j++)
	{
		cout << a[j] << " ";
	}
	quick_sort(a, 0, 9);
	for (int j = 0; j < 10; j++)
	{
		cout << a[j] << " ";
	}
	while (1);
	return 0;
}