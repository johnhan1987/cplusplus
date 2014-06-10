#include <iostream>
#include <cstdlib>

using namespace std;

class linkedList {
private:

	struct node{
		int data;
		node* next;
	};

public:
	node* head;
	node* tail;
	linkedList();
	void printList();
	void SearchRecursive(node* Ptr, int searchValue);

};
