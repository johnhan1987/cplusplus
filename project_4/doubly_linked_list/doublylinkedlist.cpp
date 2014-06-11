#include <iostream>
#include <cstdlib>

#include "doublylinkedlist.h"

using namespace std;

DLL::DLL(){

	node* n = new node;
	n->data = 1;
	n->prev = NULL;
	head = n;
	tail = n;
	
	for(int i =2; i<11; i++){
		n= new node;
		n->data = i;
		n->prev =tail;
		tail->next = n;
		tail = n;
	}
	tail->next = NULL;

}

void DLL::PrintForward(){
	node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

void DLL::PrintBackward(){
	node* temp = tail;
	while(temp!= NULL){
		cout << temp->data << " ";
		temp = temp->prev;
	}
	cout<< endl;
}

