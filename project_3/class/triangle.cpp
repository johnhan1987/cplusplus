#include <iostream>
using namespace std;
#include "triangle.h"

int triangle::area(){
	cout<<width<<", "<<height<<endl;
	return width*height/2;
}
