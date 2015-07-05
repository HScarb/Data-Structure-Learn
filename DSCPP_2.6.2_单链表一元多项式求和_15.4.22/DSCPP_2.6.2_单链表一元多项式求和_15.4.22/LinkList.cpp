// LinkList.cpp
#include "LinkList.h"
using namespace std;
DFTP
LinkList<DT>::LinkList()
{
	Head = new Node<DT>;
	Head->Next = NULL;
}

DFTP
LinkList<DT>::LinkList(DT a[], int n)
{
	Head = new Node<DT>;
	Head->Next = NULL;
	Node<DT> *end = new Node<DT>;
	for (int i = 0; i < n; i++)
	{
		Node<DT> *s = new Node<DT>;
		s->Data = a[i];
		end->Next = s;			// 先给下一个结点赋值
		end = end->Next;		// 然后往下移动end
	}
	end->Next = NULL;
}

DFTP
LinkList<DT>::~LinkList()
{
	while (Head!=NULL)
	{
		Node<DT> *q = Head;		// 暂时存放结点
		Head = Head->Next;		// 移动头结点
		delete q;				// 删除当前存放的结点
	}
}

DFTP
int LinkList<DT>::Length()
{
	int count = 0;
	Node<DT> *p = Head->Next;
	while (p!=NULL)
	{
		count++;
		p = p->Next;
	}
	return count;
}

DFTP
DT LinkList<DT>::FindKth(int k)
{
	Node<DT> *p = Head->Next;
	int count = 1;
	while (p != NULL && count < k)
	{
		p = p->Next;
		count++;
	}
	if (p == NULL)
		throw "按位查找错误";
	else
		return p->Data;
}

DFTP
int LinkList<DT>::Find(DT x)
{
	Node<DT> *p = Head->Next;
	int count = 1;
	while (p!=NULL)
	{
		if (p->Data == x)
			return count;
		p = p->Next;
		count++;
	}
	return 0;
}

DFTP
void LinkList<DT>::Insert(int i, DT x)
{
	
	Node<DT> *p = Head;
	int count = 0;
	while (p != NULL && count < i - 1)
	{
		p = p->Next;
		count++;
	}
	if (p == NULL)
	{
		 throw "插入位置无法找到";
	}
	else				// 插入结点
	{
		Node<DT> *s = new Node<DT>;
		s->Data = x;
		s->Next = p->Next;
		p->Next = s;
	}
	
}

DFTP
void LinkList<DT>::Insert_Head(DT x)
{
	Node<DT> *s = new Node<DT>;
	s->Data = x;
	s->Next = Head->Next;
	Head->Next = s;
}

DFTP
void LinkList<DT>::Insert_End(DT x)
{
	Node<DT> *p = Head;
	Node<DT> *s = new Node<DT>;
	s->Data = x;
	s->Next = NULL;
	while (p->Next != NULL)
	{
		p = p->Next;
	}
	p->Next = s;
}

DFTP
DT LinkList<DT>::Delete(int i)
{
	Node<DT> *p = Head;
	int count = 0;
	while (p != NULL && count < i - 1)
	{
		p = p->Next;
		count++;
	}
	if (p == NULL)
		throw "删除错误，无法找到要删除的项";
	else
	{
		Node<DT> *del = p->Next;
		DT x = del->Data;		// 暂存删除结点的数据
		p->Next = del->Next;
		delete del;
		return x;						// 把删除结点的数据返回
	}
}

DFTP
void LinkList<DT>::PrintList()
{
	Node<DT> *p = Head->Next;
	while (p!=NULL)
	{
		cout << p->Data;
		p = p->Next;
	}
}