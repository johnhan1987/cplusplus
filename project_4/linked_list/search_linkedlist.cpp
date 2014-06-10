#include <cstdlib>
#include <iostream>

using namespace std;

//create linked list structure
struct node{
	int data;
	node* next;
};

//Search a linked list using recursion.
void SearchRecursive(node* Ptr, int searchValue){
	if(Ptr == NULL){
		cout << searchValue << " was not found in the list.\n";
	}
	else if (Ptr->data == searchValue) {
		cout<< searchValue<< " is in the list.\n";
	}
	else {
		SearchRecursive(Ptr->next, searchValue);
	}
}

int main(int argc, char** argv){
	node* n = new node;
	node* head = n;
	node* t = n;
	
	n-> data = 1;
	for (int i=2; i<10; i++){
		n = new node;
		n->data = i;
		t->next = n;
		t = n;

	}
	n->next = NULL;

	t = head;
	while(t!=NULL){
		cout << t->data<<" ";
		t = t->next;
	}
	cout << "\n\n";
	
	SearchRecursive(head, 4);
	SearchRecursive(head, 12);

	return 0;
}