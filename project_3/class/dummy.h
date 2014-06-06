#include <iostream>
using namespace std;

class dummy{
	public:
	static int n;
	dummy(){n++;};
	~dummy(){n--;};
	bool istime (dummy& param);
};
