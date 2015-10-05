#include <iostream>
#include <stdlib.h> 
#include "quick_sort.h"
#include"basic_define.h"
using namespace std;



int main()
{
	int a[1000];
	int length=GET_ARRAY_LENGTH(a,length);
	for (int i = 0; i < length; i++)
	{
		a[i] = rand()%5000;
		cout << a[i] << " ";
	}
	cout <<endl;
	
	quick_sort(a, 0, length-1);
	for (int j = 0; j < length; j++)
	{
		cout << a[j] << " ";
	}
	while (1);
	return 0;
}