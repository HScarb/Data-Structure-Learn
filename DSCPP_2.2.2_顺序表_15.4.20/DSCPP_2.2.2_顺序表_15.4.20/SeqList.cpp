// SeqList.cpp
#include "SeqList.h"

DFTP
SeqList<DT>::SeqList(DT a[], int n)
{
	if (n > MaxSize)
		throw"参数非法";
	for (int i = 0; i < n; i++)
	{
		data[i] = a[i];
	}
	length = n;
}

DFTP
DT SeqList<DT>::FindKth(int k)
{
	return data[k - 1];
}

DFTP
int SeqList<DT>::Find(DT x)
{
	for (int i = 0; i < length; i++)
	{
		if (data[i] == x)return i + 1;
	}
	return 0;
}

DFTP
void SeqList<DT>::Insert(int i, DT x)
{
	for (int j = length; j >= i; j--)
	{
		data[j] = data[j - 1];
	}
	data[i - 1] = x;
	length++;
}

DFTP
DT SeqList<DT>::Delete(int i)
{
	x = data[i - 1];
	for (j = i; j < length; j++)
	{
		data[j - 1] = data[j];
	}
	length--;
	return x;
}

DFTP
void SeqList<DT>::PrintList()
{
	for (int i = 0; i < length; i++)
	{
		cout << data[i];
	}
}