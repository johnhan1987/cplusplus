#include <cstdlib>
#include <iostream>
#include <string>
#include "create_hash.h"
using namespace std;

int main(int argc, char** argv){
	//int index;
	//hash hashObj;
	//index = hashObj.Hash("Paula");
	//cout << "index = "<< index << endl;

	hash Hashy;
	Hashy.AddItem("Paul", "Locha");
	Hashy.AddItem("Kim", "Iced Mocha");
	Hashy.AddItem("Emma", "Chocolate");
	Hashy.AddItem("Mike", "Chai Tea");
	Hashy.AddItem("Joe", "Water"); 
	Hashy.PrintTable();

	Hashy.PrintItemsInIndex(3);

	string name;
	while(name != "exit"){
		//cout << "Search for ";
		//cin >> name;
		//Hashy.FindDrink(name);
		cout<< "Remove: ";
		cin >> name;
		Hashy.RemoveItem(name);
	}
}

