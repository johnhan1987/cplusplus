#include <iostream>
#include "rectangle.h"
#include "dummy.h"
#include "triangle.h"
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

	//inheritance
	cout<<"inheritance from polygon to triangle:"<<endl;
	triangle s(4, 5);
	cout<<"The triangle area is: "<<s.area()<<endl;	

	//Polymorphism
	////pointers to base class
	cout<<"Polymorphism: pointers to base class"<<endl;
	triangle trgl(1,1);
	polygon * ppoly1 = &trgl;
	ppoly1->set_values(4,5);
	cout<< trgl.area() <<endl;
	////virtual members
	cout<<"Polymorphism: virtual members"<<endl;

	////abstract base classes
	cout<<"Polymorphism: abstract base classes"<<endl;

	return 0;
}
