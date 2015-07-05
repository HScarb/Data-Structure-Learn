// Test.cpp
#include "LinkList.cpp"
#include <string>
using namespace std;
struct elem
{
	int coef;		// 系数
	int exp;		// 指数
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
	string str[5] = { "北", "京", "欢", "迎", "你" };
	LinkList<string> stringLL;
	for (int i = 0; i < 5; i++)
	{
		stringLL.Insert(i+1,str[i]);
	}
	stringLL.PrintList();
	cout << endl << "链表长度: "<<stringLL.Length() << endl;
	int huan = stringLL.Find("欢");
	cout << "欢的位置 = " << huan << endl;
	string str3 = stringLL.FindKth(3);
	cout << "第三个字是: " << str3 << endl;
	str3 = stringLL.Delete(3);
	cout << "被删掉的字: " << str3 << endl;
	cout << "删掉第三个字之后:" ;
	stringLL.PrintList();
	cout << endl;
	system("pause");
}