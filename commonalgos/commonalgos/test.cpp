#include <iostream>
#include<ctime>
#include <cstdlib> 
#include"sort_name.h"
using namespace std;


int main()
{
	/*******************************************************
	≈≈–ÚÀ„∑®≤‚ ‘
	********************************************************/
	clock_t start, finish;
	clock_t totalTime;
	int a[20000];
	int length=GET_ARRAY_LENGTH(a,length);
	for (int i = 0; i < length; i++)
	{
		a[i] = rand() % 5000;
       // cout << a[i] << " ";
	}
	cout <<endl;

	start = clock();
	//insert_sort(a, length - 1);
	//bubble_sort(a, length - 1);
	//quick_sort(a, 0, length-1);
	//merge_sort(a, 0, length-1);
	//heap_sort(a, length - 1);	
	finish = clock();
	totalTime = (finish - start);
	for (int j = 0; j < length; j++)
	{
		cout << a[j] << " ";
	}
	cout << endl;
	cout << totalTime;
	while (1);
	return 0;
}