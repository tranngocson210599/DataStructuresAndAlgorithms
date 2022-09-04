#include<stdio.h>
#include<iostream>
struct node 
{
	int data;
	node* next;
};

class LinkedList
{
 private:
	node* pHead;
 public:
	 void addElementFirst(int data);
	 void addElemnetEnd(int data);
	 void display();
	 void searchNode(int data);
};


void LinkedList::display()
{
	while (pHead != nullptr)
	{
		std::cout << pHead->data;
		pHead = pHead->next;
	}
}
void LinkedList::addElementFirst(int data)
{
	node* tmp = new node;
	tmp->data = data;
	tmp->next = pHead;
	pHead = tmp;

}
int main()
{
	return 0;
}