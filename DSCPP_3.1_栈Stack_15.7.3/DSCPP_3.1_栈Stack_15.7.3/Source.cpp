// sequential stack À≥–Ú’ª
#include <iostream>
using namespace std;
const int StackSize = 10;
#define TP template<class DT>

TP
class SeqStack
{
public:
	SeqStack(){ top = -1; }
	~SeqStack(){}
	void Push(DT x);
	DT Pop();
	DT GetTop(){ if (top != -1) return data[top]; }
	int Empty()
	{
		if (top == -1)
			return 0;
		return 1;
	}
private:
	DT data[StackSize];
	int top;
};

template<class DT>
void SeqStack<DT>::Push(DT x)
{
	if (top == StackSize - 1)throw"…œ“Á";
	data[++top] = x;
}

template<class DT>
DT SeqStack<DT>::Pop()
{
	if (top == -1)throw"œ¬“Á";
	DT x;
	x = data[top--];
	return x;
}

