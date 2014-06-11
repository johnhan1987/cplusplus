#include <iostream>
#include <cstdlib>
#include "linkedList.h"

using namespace std;

int main(int argc, char** argv){
	List john;

	john.AddNode(3);
	john.AddNode(4);
	john.AddNode(5);
	john.AddNode(6);
	john.PrintList();

	john.DeleteNode(5);
	john.PrintList();
	
	john.DeleteNode(3);
	john.PrintList();
	
	john.DeleteNode(19);
}
