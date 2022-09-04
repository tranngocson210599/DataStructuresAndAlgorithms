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
	// LinkedList();
	 void addElementFirst(int data);
	 void addElemnetEnd(int data);
	 void display();
	 void searchNode(int data);
};

using namespace std;
void LinkedList::display()
{
	while (pHead != NULL)
	{
		cout << pHead->data << " " << endl;
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
void LinkedList::searchNode(int data)
{
	/*int i = 0;
	node* tmp = new node;
	for (i = 1, tmp = pHead; tmp != nullptr && tmp->data != data; tmp = tmp->next, i++);
	if (tmp->data == data)
	{
		std::cout << "Found at position " << i;
	}
	else
		std::cout << "Not found";*/
	int count = 0;
	while (pHead != NULL)
	{
		if (pHead->data == data)
		{
			std::cout << "found at position " << count << endl;
			return;
		}
		else
		{
			count++;
		}
		pHead = pHead->next;
	}
	cout << "Not found" << endl;
}
int main()
{
	LinkedList list ;
	for (int i = 0; i < 10; i++)
		list.addElementFirst(i);
	list.display();
	list.searchNode(9);
	system("pause");
	return 0;
}