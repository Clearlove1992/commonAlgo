#ifndef __MERGE_SORT__
#define __MERGE_SORT__

void mergearray(int a[], int first, int mid, int last, int tmp[])
{
	int i = first;
	int j = mid + 1;
	int m = mid;
	int n = last;
	int k = 0;
	while (i <= m&&j <= n)//重叠部分选小的
	{
		if (a[i] <= a[j])
			tmp[k++] = a[i++];
		else
			tmp[k++] = a[j++];
	}
	while (i <= m)//如果满足这个条件，则后半序列已经全部tmp中
		tmp[k++] = a[i++];
	while (j <= n)//如果满足这个条件，则前半序列已经全部tmp中
		tmp[k++] = a[j++];
	for (int d = 0; d < k; d++)
		a[first+d] = tmp[d];
	return ;
}

void merge_sort_base(int a[], int first, int last,int tmp[])
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		merge_sort_base(a, first, mid, tmp);//左边序列递归
		merge_sort_base(a, mid + 1, last, tmp);//右边序列递归
		mergearray(a, first, mid, last, tmp);//合并左右两个序列
	}
	return ;
}

void merge_sort(int a[], int first, int last)
{
	int *p = new int[last - first + 1];//开辟临时内存
	if (p == nullptr)
		return ;
	merge_sort_base(a, first, last, p);
	delete[] p;
	return ;
}





#endif