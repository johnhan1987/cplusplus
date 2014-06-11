#include <iostream>
#include <cstdlib>

#include "BST.h"

using namespace std;

int main(int argc, char** argv){
	int TreeKeys[16] = {50, 76, 21, 4, 32, 64, 15, 52, 14, 100, 83, 2, 3, 70, 87, 80};
	BST myTree;
	cout << "Printing the tree in order before adding numbers"<< endl;
	myTree.PrintInOrder();
	cout<< endl;
	for(int i=0; i<16;i++){
		myTree.AddLeaf(TreeKeys[i]);
	}

	cout << "Printing the tree in order after adding numbers"<<endl;
	myTree.PrintInOrder();
	cout<< endl;

	myTree.PrintChildren(myTree.ReturnRootKey());
	cout << endl;

	for(int i = 0; i<16;i++){
		myTree.PrintChildren(TreeKeys[i]);
		cout<<endl;
	}

	cout << "The smallest value in the tree is " << myTree.FindSmallest()<< endl;

	cout << " Enter a key value to delete. Enter -1 to stop process."<< endl;
	int input = 0;
	while(input != -1){
		cout << endl;
		cout << "Delete Node: "<< endl;
		cin >> input;
		if (input !=-1){
			cout<< endl;
			myTree.RemoveNode(input);
			myTree.PrintInOrder();
		}

	}
}
