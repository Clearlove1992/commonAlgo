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
		while (i < j&&a[j] >= key)//��ǰ����ң���Ҫ�ӵȺ�
			j--;
		a[i] = a[j];
		while (i < j&&a[i] <= key)//��������ң���Ҫ�ӵȺ�
			i++;
		a[j] = a[i];
	}
	a[i] = key;
	quick_sort(a, left, i - 1);
	quick_sort(a, i + 1, right);
}

#endif