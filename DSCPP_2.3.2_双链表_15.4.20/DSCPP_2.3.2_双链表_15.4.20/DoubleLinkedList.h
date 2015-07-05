// DoubleLinkedList.h
#ifndef __DOUBLE_LINKED_LIST_H__
#define __DOUBLE_LINKED_LIST_H__
#include <iostream>
using namespace std;

#define DFTP template<typename DT>

DFTP
struct DulNode
{
	DT data;
	DulNode<DT> *prior, *next;
};
class DoLinkedList
{
public:
	DoLinkedList();
	~DoLinkedList();

private:

};
#endif