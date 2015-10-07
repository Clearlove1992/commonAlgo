#ifndef __INSERT_SORT__
#define __INSERT_SORT__


void insert_sort(int array[], int last)
{
	int i, j = 0;
	int tmp = 0;

	for (i = 1; i < last+1; i++)
	{
		tmp = array[i];
		for (j = i - 1; j >= 0 && array[j] > tmp; j--)
			array[j + 1] = array[j];
		array[j + 1] = tmp;
	}

}


#endif