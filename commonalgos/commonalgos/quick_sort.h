#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_
template<typename T>
void quick_sort(T a[], int left, int right)
{
	if (left >= right)
		return ;
	int i = left;
	int j = right;
	int key = a[left];
	while (i < j)
	{
		while (i < j&&a[j] >= key)//往前面查找，需要加等号
			j--;
		a[i] = a[j];
		while (i < j&&a[i] <= key)//往后面查找，需要加等号
			i++;
		a[j] = a[i];
	}
	a[i] = key;
	quick_sort(a, left, i - 1);
	quick_sort(a, i + 1, right);
}

#endif