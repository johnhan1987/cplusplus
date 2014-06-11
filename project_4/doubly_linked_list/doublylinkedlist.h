#include <iostream>
#include <cstdlib>

using namespace std;

class DLL {
private:

	struct node {
		int data;
		node* next;
		node* prev;
	};

	node* head;
	node* tail;
	

public:

	DLL();
	void PrintForward();
	void PrintBackward();
};
