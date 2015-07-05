// 2.3.1 ������Ĵ洢����
#include <iostream>
#include <iomanip>
using namespace std;
#define NDT Node<DT>*

template<class DT>
struct Node
{
	DT data;
	Node<DT> *Next;		// ʹ��DT���͵�ģ��������Node
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
	LinkList();						// ���캯��������ֻ��ͷ���Ŀ�����
	LinkList(DT a[], int n);		// ������n��Ԫ�صĵ�����
	~LinkList();
	int Length();
	DT FindKth(int K);				// ��λ�ò���
	int Find(DT X);					// ��ֵ���ң�����λ�����
	void Insert(int i, DT X);		// ���룬�ڵ�i��λ�ò���Ԫ��ֵΪX�Ľ��
	DT Delete(int i);				// ɾ�������еĵ�i�����
	void PrintList();				// �������������һ�������Ԫ��
private:
	Node<DT> *head;					// ͷָ�룬���������ݣ�ֻ������һ�����
};

template<class DT>
LinkList<DT>::LinkList()
{
	head = new Node;				// ����ͷ���
	head->Next = NULL;				// ͷ����ָ�����ÿ�
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
	NDT p = head->Next;					//������ָ��p��ʼ��
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