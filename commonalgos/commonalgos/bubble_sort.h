#ifndef __BUBBLE_SORT__
#define __BUBBLE_SORT__

void bubble_sort(int a[], int last)
{
	int i, j = 0;
	int tmp = 0;

	for (i = last; i >= 1; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}
	}

	return;
}


#endif