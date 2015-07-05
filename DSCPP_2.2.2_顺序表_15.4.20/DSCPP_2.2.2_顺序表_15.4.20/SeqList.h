// SeqList.h
#ifndef __SEQ_LIST_H__
#define __SEQ_LIST_H__
#include <iostream>
using namespace std;

#define DFTP template<typename DT>
#define MaxSize 100

DFTP
class SeqList
{
public:
	SeqList(){ length = 0; }
	SeqList(DT a[], int n);
	~SeqList(){}
	int Length{ return length; }
	DT FindKth(int k);
	int Find(DT x);

	void Insert(int i, DT x);
	DT Delete(int i);
	void PrintList();

private:
	int length;
	DT data[MaxSize];
};

#endif