// 2.3.1 单链表的存储方法
#include <iostream>
#include <iomanip>
using namespace std;
#define NDT Node<DT>*

template<class DT>
struct Node
{
	DT data;
	Node<DT> *Next;		// 使用DT类型的模板来创建Node
	Node(Node<DT> *ptr = NULL){ Next = ptr; }
	Node(const T &item, Node<DT> *ptr = NULL)
	{
		Next = ptr;
		data = item;
	}
};

template<class DT>
class LinkList
{
public:
	LinkList();						// 构造函数，建立只有头结点的空链表
	LinkList(DT a[], int n);		// 建立有n个元素的单链表
	~LinkList();
	int Length();
	DT FindKth(int K);				// 按位置查找
	int Find(DT X);					// 按值查找，返回位置序号
	void Insert(int i, DT X);		// 插入，在第i个位置插入元素值为X的结点
	DT Delete(int i);				// 删除链表中的第i个结点
	void PrintList();				// 遍历链表，按序号一次输出各元素
private:
	Node<DT> *head;					// 头指针，不储存数据，只储存下一个结点
};

template<class DT>
LinkList<DT>::LinkList()
{
	head = new Node;				// 生成头结点
	head->Next = NULL;				// 头结点的指针域置空
}

template<class DT>
int LinkList<DT>::Length()
{
	NDT p = head->Next;
	int count = 0;
	while (p!=NULL)
	{
		p = p->Next;
		count++;
	}
	return count;
}

template<class DT>
void LinkList<DT>::Insert(int i, DT X)
{
	auto p = head;
	int count = 0;
	while (p!=NULL && count <i-1)
	{
		p = p->Next;
		count++;
	}
	if (p == NULL)
		return;
	else
	{
		auto n = new Node<DT>;
		n->data = X;
		n->Next = p->Next;
		p->Next = n;
	}
}

template<class DT>
void LinkList<DT>::PrintList()
{
	NDT p = head->Next;					//　工作指针p初始化
	while (p!=NULL)
	{
		cout << p->data;
		p = p->Next;
	}
}


int main()
{
	LinkList<int> intlinklist;
	for (int i = 0; i < 5; i++)
	{
		intlinklist.Insert(i, i);
	}
	intlinklist.PrintList();
	system("pause");
}