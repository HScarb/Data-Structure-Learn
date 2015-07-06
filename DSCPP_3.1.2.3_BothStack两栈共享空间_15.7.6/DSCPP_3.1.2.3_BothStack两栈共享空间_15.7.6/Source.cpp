// BothStack 两栈共享空间
#include <iostream>
using namespace std;
const int StackSize = 100;
#define TP template<class DT>

TP
class BothStack
{
public:
	BothStack(){ top1 = -1; top2 = StackSize; }
	~BothStack(){}
	void Push(int i, DT x);
	DT Pop(int i);
	DT GetTop(int i);
	int Empty(int i);

private:
	DT data[StackSize];
	int top1, top2;
};

template <class DT>
void BothStack<DT>::Push(int i, DT x)
{
	if (top1 == top2 - 1)throw"上溢";
	if (i == 1)data[++top1] = x;
	if (i == 2)data[--top2] = x;
}

template <class DT>
DT BothStack<DT>::Pop(int i)
{
	if (i == 1)
	{
		if (top1 == -1)throw"下溢";
		return data[top1--];
	}
	if (i == 2)
	{
		if (top2 == StackSize)throw"下溢";
		return data[top2++];
	}
}

template <class DT>
DT BothStack<DT>::GetTop(int i)
{
	if (i == 1)
		if (top1 != -1)
			return data[top1];
	if (i == 2)
		if (top2 != StackSize)
			return data[top2];
}

template <class DT>
int BothStack<DT>::Empty(int i)
{
	if (i == 1)
		return top1 == -1 ? 1 : 0;
	if (i == 2)
		return top2 == StackSize ? 1 : 0;
}