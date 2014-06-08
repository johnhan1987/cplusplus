#include <iostream>
using namespace std;

double square_root(double x){
	double l, r;
	if (x<1.0) {
		l = x, r =1.0;
	} else {
		l = 1.0, r=x;
	}
	while (r-l>0 && r-l>0.000001){
		double m = l + 0.5*(r-l);
		double square_m = m*m;
		if(square_m == x) return m;
		else if (square_m > x) r = m;
		else l = m;
	}
	return l;
	
}

int main(){
	cout<< "Please enter a positive real number:"<<endl;
	double x;
	cin>>x;
	cout<<"The square root is: "<< square_root(x)<<endl;
	return 0;
}

