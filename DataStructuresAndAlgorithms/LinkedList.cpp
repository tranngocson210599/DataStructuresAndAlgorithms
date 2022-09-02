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
	 void addElementFirst(node q);
	 void addElemnetEnd(node q);
	 void display();
	 void searchNode(node x);
};