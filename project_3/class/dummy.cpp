#include <iostream>
#include "dummy.h"

using namespace std;

bool dummy::istime (dummy& param){
	if(&param == this) return true;
	else return false;
}
