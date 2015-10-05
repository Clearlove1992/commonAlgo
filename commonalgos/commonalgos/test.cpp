#include <iostream>
#include "quick_sort.h"
#include"basic_define.h"
using namespace std;

int main()
{
	int a[20];
	int length;
	//GET_ARRAY_LENGTH(a,length);
	for (int i = 0; i < 20; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	//cout <<endl;
	quick_sort(a, 0, 19);
	for (int j = 0; j < 20; j++)
	{
		cout << a[j] << " ";
	}
	while (1);
	return 0;
}