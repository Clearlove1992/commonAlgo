#ifndef __HEAP_SORT__
#define __HEAP_SORT__

void maxheapdown(int a[],int inode,int last)//从i节点开始向下调整堆
{
	int ichild = 2 * inode + 1;//子节点
	int tmp = a[inode];
	for (; ichild <= last;inode =ichild,ichild=2*inode+1)//保证节点在堆范围内，更新节点
	{
		if ((ichild<=last-1)&&(a[ichild] < a[ichild + 1]))//如果存在右节点，则比较左右节点
			ichild++;
		if (a[inode] < a[ichild])//如果节点小于其子节点，则交换
		{
			tmp = a[ichild];
			a[ichild] = a[inode];
			a[inode] = tmp;
		}
		else break;
	}
	return ;
}

void heap_sort(int a[], int last)
{
	int tmp;
	for (int i = (last - 1) / 2; i >= 0; i--)//从数组建立堆
		maxheapdown(a, i, last);

	for (int ilast = last; ilast > 0; ilast--)//从最后一个元素开始调整堆
	{
		tmp = a[0];
		a[0] = a[ilast];
		a[ilast] = tmp;
		maxheapdown(a, 0, ilast-1);
	}
	return ;
}







#endif