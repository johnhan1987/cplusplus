#include "Date.h"
#include <iostream>
using namespace std;

int main()
{
	int s, d, f;
	cout << "enter the month" <<endl;
	cin >> s;
	cout << "enter the day" <<endl;
	cin >> d;
	cout << "enter the year" <<endl;
	cin >> f;
	//cout << s << d << f << endl;
	Date q(s,d,f);
	cout << "the month is "<<q.GetMonth()<<endl;
	return 0;
	//return q.GetMonth();
	/*RETURN: it won't print anything out. Only if the cout is used*/
}
