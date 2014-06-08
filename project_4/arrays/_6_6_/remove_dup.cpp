#include <iostream>
#include <vector>
using namespace std;

int remove_duplicate(vector<int>* A){
	if(!A->size()) return 0;
	int i=0;
	int j=1;
	while ( j < A->size() ){
		if((*A)[i] != (*A)[j]){
			(*A)[++i]=(*A)[j];
		}
		++j;
	}
	return i+1;
}

int main (){
	//vector<int> a = {1,2,3,3,4}; //it doesn't work.
	vector<int> a (3,9);
	
	//vector<int> a(5)={ 1,2,3,4,4 }; //it doesn't work
	
	//int a [] = {1,2,3,4,4};//it doesn't work
	
	cout<<"The number of unique value is "<< remove_duplicate(&a)<<endl;
	return 0;
}
