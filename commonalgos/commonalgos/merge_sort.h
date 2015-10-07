#ifndef __MERGE_SORT__
#define __MERGE_SORT__

void mergearray(int a[], int first, int mid, int last, int tmp[])
{
	int i = first;
	int j = mid + 1;
	int m = mid;
	int n = last;
	int k = 0;
	while (i <= m&&j <= n)
	{
		if (a[i] <= a[j])
			tmp[k++] = a[i++];
		else
			tmp[k++] = a[j++];
	}
	while (i <= m)
		tmp[k++] = a[i++];
	while (j <= n)
		tmp[k++] = a[j++];
	return ;
}

void merge_sort_base(int a[], int first, int last,int tmp[])
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		merge_sort_base(a, first, mid, tmp);
		merge_sort_base(a, mid + 1, last, tmp);
		mergearray(a, first, mid, last, tmp);
	}
	return ;
}

void merge_sort(int a[], int first, int last)
{
	int *p = new int[last - first + 1];
	if (p == nullptr)
		return ;
	merge_sort_base(a, first, last, p);
	delete[] p;
	return ;
}





#endif