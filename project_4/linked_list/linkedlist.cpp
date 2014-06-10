#include <cstdlib>
#include <iostream>
#include "linkedlist.h"

using namespace std;


linkedList::linkedList(){
	node* n = new node;
	head = n;
	tail = n;

	n->data =1;
	
	for (int i =2; i<10; i++){
		n = new node;
		n->data = i;
		tail->next = n;
		tail = n;
	}
	n->next = NULL;
}


void linkedList::printList(){
	node* t;
	t = head;
	cout << "The list is: "<< endl;
	while(t!=NULL){
		cout<< t->data << " ";
		t = t->next;
	
	}
	cout << endl;
}

//Search a linked list using recursion.
void linkedList::SearchRecursive(node* Ptr, int searchValue){
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

