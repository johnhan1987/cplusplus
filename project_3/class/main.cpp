#include <iostream>
#include "rectangle.h"
#include "dummy.h"
using namespace std;
int dummy::n = 0;
int main(){
	rectangle r(3, 4);
	cout<<"The area is "<< r.area()<<endl;
	
	//test for keyword this
	cout<<"Test for this keyword: "<<endl;
	dummy a;
	dummy * b = &a;
	if (b->istime(a)) cout<<"yes, &a is b\n"<<endl;

	//test for the static member
	cout<<"Test for static member:"<<endl;
	dummy * c= new dummy[5];
	cout<<a.n <<endl;
	delete[] c;
	cout <<"dummy::n is "<< dummy::n<< endl;
	cout <<"a.n is " << a.n << endl;	
	return 0;
}
