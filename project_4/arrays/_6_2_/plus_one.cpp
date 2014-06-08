#include <iostream>
#include <vector>
using namespace std;

vector<int> plus_one(vector<int> A) {
	++A.back();
	for (int i=A.size()-1; i>0 && A[i] ==10; --i){
		A[i]=0;
		++A[i-1];
	}
	if (A[0]==10){
		A[0]=0;
		A.insert(A.begin(), 1, 1);
	}
	return A;
}

int main(){
	//vector<int> myvector (3, 9); //It works.
	//vector<int> myvector = {1,2,3,4,9,9,9};//It is a wrong definition
	//int myvector [] = {1,2,3,9,9,9};//It doesn't work.
//	cout<<"The result is "<<plus_one(myvector)<<endl;
	vector<int> result;
	result =plus_one(myvector);
	cout<<"The new vector is:"<<endl;
	
	vector<int>::iterator j;
	for (j=result.begin(); j<result.end();j++){
		cout<<" "<<*j;
	}
	cout << endl;
	return 0;
}
