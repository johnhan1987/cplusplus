#include <iostream>
#include <string>
using namespace std;

string intToString (int x) {
	bool is_negative =false;
	if (x<0) {
		x = -x, is_negative = false;
	}
	string s;
	while (x) {
		cout<<x%10<<endl;
		s.push_back('0'+x%10);
		x /=10;
	}
	if(s.empty()) return {"0"};
	if(is_negative) s.push_back('-');
	
	//reverse(s.begin(), s.end());
	return s;
}

int main(){
	cout<<"Enter a integer:"<<endl;
	int s;
	cin>>s;
	cout<<"The string converted from the integer is: " <<intToString(s)<<endl;

	return 0;
}

