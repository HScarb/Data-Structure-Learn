// Test.cpp
#include "LinkList.cpp"
#include <string>
using namespace std;
struct elem
{
	int coef;		// ϵ��
	int exp;		// ָ��
};

void LinkList<elem>::Add(LinkList<elem> &A, LinkList<elem> B)
{
	Node<elem> *pre = A.Head;
	Node<elem> *p = pre->Next;
	Node<elem> *qre = B.Head;
	Node<elem> *q = qre->Next;

	while (p != NULL && q != NULL)
	{
		if (p->exp)
	}
}

int main()
{
	string str[5] = { "��", "��", "��", "ӭ", "��" };
	LinkList<string> stringLL;
	for (int i = 0; i < 5; i++)
	{
		stringLL.Insert(i+1,str[i]);
	}
	stringLL.PrintList();
	cout << endl << "������: "<<stringLL.Length() << endl;
	int huan = stringLL.Find("��");
	cout << "����λ�� = " << huan << endl;
	string str3 = stringLL.FindKth(3);
	cout << "����������: " << str3 << endl;
	str3 = stringLL.Delete(3);
	cout << "��ɾ������: " << str3 << endl;
	cout << "ɾ����������֮��:" ;
	stringLL.PrintList();
	cout << endl;
	system("pause");
}