#include <iostream>
#include "polygon.h"
using namespace std;

polygon::polygon(int a, int b){
	set_values(a, b);
}

void polygon::set_values(int a, int b){
	width = a;
	height = b;
}
