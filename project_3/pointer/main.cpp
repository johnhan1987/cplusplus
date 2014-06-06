#include <iostream>
#include "rectangle.h"
using namespace std;

int main(){
	rectangle r(3, 4);
	cout<<"The area is "<< r.area()<<endl;
	
	//pointers to classes
	rectangle * s;
	s = &r;
	cout <<"pointers to classes: "<<endl;
	cout<<"s->area(): " << s->area()<<endl;
	cout<<"(*s).area(): " << (*s).area() <<endl;
	
	//pointers to array of classes
	rectangle * sarray;
	sarray = new rectangle[2] { {2,5}, {3, 6} };
	cout<< "sarray[0]'s area: " << sarray[0].area()<<endl;
	cout<< "sarray[1]'s area: " << sarray[1].area()<<endl;
	
	//pointer from heap
	rectangle * sheap = new rectangle (3,4);
	cout<<"sheap->area(): " << sheap->area()<< endl;
	
	return 0;
}
	
