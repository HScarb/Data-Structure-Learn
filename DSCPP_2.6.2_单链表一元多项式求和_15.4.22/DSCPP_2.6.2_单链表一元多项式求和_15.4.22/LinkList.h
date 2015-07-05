// LinkList.h
#ifndef __LINK_LIST_H__
#define __LINK_LIST_H__
#include <iostream>
using namespace std;
#define DFTP template<typename DT>

DFTP
struct Node
{
	DT Data;
	Node<DT> *Next;
};

DFTP
class LinkList
{
public:
	LinkList();
	LinkList(DT a[], int n);			// ����һ��n��Ԫ�صĵ�����
	~LinkList();

	int Length();
	DT FindKth(int k);					// ��λ����
	int Find(DT x);						// ��ֵ����
	void Insert(int i, DT x);
	void Insert_Head(DT x);
	void Insert_End(DT x);

	DT Delete(int i);
	void PrintList();

	friend void Add(LinkList<elem> &A, LinkList<elem> &B);
private:
	Node<DT> *Head;
};
#endif