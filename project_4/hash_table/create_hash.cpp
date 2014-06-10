#include <iostream>
#include <cstdlib>
#include <string>
#include "create_hash.h"
using namespace std;

hash::hash(){
 //tableSize = 100;
	for (int i=0; i<tableSize; i++){
		HashTable[i] = new item;
		HashTable[i]->name = "empty";
		HashTable[i]->drink = "empty";
		HashTable[i]-> next = NULL;
	}
}


int hash::Hash(string key){
	int hash = 0;
	int index;
	//index = key.length();

	for (int i=0; i<key.length(); i++){
		hash += (int)key[i];
		cout <<"hash = "<<hash<<endl;
	}
	//cout <<"key[0] = " << (int)key[0] << endl;
	//cout <<"key[1] = " << (int)key[1] << endl;
	//cout <<"key[2] = " << (int)key[2] << endl;
	//cout <<"key[3] = " << (int)key[3] << endl;
	
	index = hash % tableSize;

	return index;	

}

void hash::AddItem(string name, string drink){
	int index = Hash(name);
	
	if(HashTable[index]->name =="empty"){
		HashTable[index]->name = name;
		HashTable[index]->drink = drink;
	}
	else {
		item* Ptr = HashTable[index];
		item* n = new item;
		n->name = name;
		n->drink = drink;
		n->next = NULL;
		while(Ptr->next != NULL){
			Ptr = Ptr->next;
		}
		Ptr->next = n;
	}

}

int hash::NumberOfItemsInIndex(int index){
	int count = 0;
	
	if(HashTable[index]->name == "empty"){
		
		return count;
	}
	else {
		count++;
		item* Ptr = HashTable[index];
		while(Ptr->next != NULL){
			count++;
			Ptr = Ptr->next;
		}
		return count;
	}
}

void hash::PrintTable(){
	int number;
	for(int i=0; i<tableSize; i++){
		number = NumberOfItemsInIndex(i);
		cout << "--------------------\n";
		cout <<"index = " << i << endl;
		cout << HashTable[i]->name << endl;
		cout << HashTable[i]->drink << endl;
		cout << "# of items = " << number << endl;
	}
}

void hash::PrintItemsInIndex(int index){
	item* Ptr = HashTable[index];
	
	if(Ptr->name == "empty") cout << "index = "<< index <<" is empty"<<endl;
	else {
		cout << "index = " << index << " contains the following items:"<<endl;
		while(Ptr != NULL){
			cout << "--------------------------\n";
			cout << Ptr->name <<", " << Ptr->drink << endl;
			cout << "--------------------------\n";
			Ptr = Ptr->next;
		} 
	}
}

void hash::FindDrink(string name){
	int index = Hash(name);
	bool foundName = false;
	string drink;
	
	item* Ptr = HashTable[index];
	while(Ptr != NULL) {
		if(Ptr->name == name){ 
			drink = Ptr->drink;
			foundName = true;
		}
		Ptr = Ptr->next;
	}
	if(foundName = true) cout<< "Favourite drink = " << drink<<endl;
	else cout<< "Name is not in the hash table." << endl;
}

void hash::RemoveItem(string name){
	int index = Hash(name);
	item* delPtr;
	item* P1;
	item* P2;
	
	if(HashTable[index]->name == "empty"&&HashTable[index]->drink =="empty") cout << name << "was not found in the hash table.";
	else if (HashTable[index]->name == name && HashTable[index]->next ==NULL)
	{
		HashTable[index]->name ="empty";
		HashTable[index]->drink ="empty";
		cout << name << "was removed from the hash table."<< endl;
	}
	else if (HashTable[index]->name == name){
		delPtr =HashTable[index];
		HashTable[index] = HashTable[index] ->next;
		delete delPtr;
		cout << name<< " was removed from the hash table."<<endl;
	}
	else {
		P1 = HashTable[index]->next;
		P2 = HashTable[index];
		while(P1 != NULL && P1->name != name){
			P2 = P1;
			P1 = P1->next;
		}	
		if(P1==NULL) cout << name <<" was not found."<< endl;
		else {
			delPtr = P1;
			P1 = P1->next;
			P2->next = P1;
			delete delPtr;
			cout << name << " was removed."<< endl;
		}
	}
}
