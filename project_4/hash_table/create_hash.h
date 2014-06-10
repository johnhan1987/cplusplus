#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef HASH_H
#define HASH_H

class hash{
private:
	static const int tableSize = 5;
	struct item {
		string name;
		string drink;
		item* next;
	};

	item* HashTable[tableSize];
public:
	hash();
	int Hash(string key);
	void AddItem(string name, string drink);			
	int NumberOfItemsInIndex(int);
	void PrintTable();
	void PrintItemsInIndex(int index);
	void FindDrink(string name);	
	void RemoveItem(string name);
};

#endif
