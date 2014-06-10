#include <cstdlib>
#include <iostream>
#include "linkedlist.h"
using namespace std;

int main(int argc, char** argv){
	linkedList list;
	list.printList();
	list.SearchRecursive(list.head, 4);
	list.SearchRecursive(list.head, 12);

	return 0;
}
