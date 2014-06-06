#include "rectangle.h"

rectangle::rectangle(int w, int h){
	set_values(w, h);
}

void rectangle::set_values(int wi, int he){
	width = wi;
	height = he;
}

int rectangle::area(){
	return width*height;
}
