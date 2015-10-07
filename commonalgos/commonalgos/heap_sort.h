#ifndef __HEAP_SORT__
#define __HEAP_SORT__

void maxheapdown(int a[],int inode,int last)//��i�ڵ㿪ʼ���µ�����
{
	int ichild = 2 * inode + 1;//�ӽڵ�
	int tmp = a[inode];
	for (; ichild <= last;inode =ichild,ichild=2*inode+1)//��֤�ڵ��ڶѷ�Χ�ڣ����½ڵ�
	{
		if ((ichild<=last-1)&&(a[ichild] < a[ichild + 1]))//��������ҽڵ㣬��Ƚ����ҽڵ�
			ichild++;
		if (a[inode] < a[ichild])//����ڵ�С�����ӽڵ㣬�򽻻�
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
	for (int i = (last - 1) / 2; i >= 0; i--)//�����齨����
		maxheapdown(a, i, last);

	for (int ilast = last; ilast > 0; ilast--)//�����һ��Ԫ�ؿ�ʼ������
	{
		tmp = a[0];
		a[0] = a[ilast];
		a[ilast] = tmp;
		maxheapdown(a, 0, ilast-1);
	}
	return ;
}







#endif