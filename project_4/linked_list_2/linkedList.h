#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstdlib>

using namespace std;

class List{
private:
	typedef struct node{
		int data;
		node* next;
	}* nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr temp;
public:
	List();
	void AddNode(int addData);
	void DeleteNode(int delData);
	void PrintList();


};

#endif
