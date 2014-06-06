#include <iostream>
using namespace std;
#include "polygon.h"

class triangle: public polygon{
public:
	triangle(int width, int height):polygon(width, height){}
	//using polygon::polygon;
	int area(void);
};
