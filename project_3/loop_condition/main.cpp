#include <iostream>
#include <string>
using namespace std;


struct human {
		string name;
		int age;	
	};

int main()
{
	//for loops
	cout << "for loop:" << endl;
	int i=1;
	int sum=0;
	for(i=1; i<=5; i++){
		sum = sum + i;
	}
	cout << "The sum is " << sum << "\n";
	
	//if statement
	cout << "\n if statement:" <<endl;
	int x=0;
	cout << "Please enter value for x:" <<endl;
	cin >> x;
	if (x!=0 && x >0 && x <10) cout << "x is greater than 0"<< endl;
	else if (x>10) cout << "x is greater than 10" <<endl;
	else cout<<"x is smaller than 0"<<endl;

	//while do statement
	cout <<"\n while do statement:"<<endl;
	int n1=10;
	while(n1>0){
		n1--;
		cout<< n1 <<", ";
	}
	cout<<endl;	
	
	//do while statement
	cout << "\n do while statement:"<<endl;
	int n2=10;
	do {
		n2--;
		cout << n2<<", ";
	} while(n2>0);
	cout << endl;

	//break statement
	cout << "\n break statement:" << endl;
	for(int b=10; b>=0; b--){
		cout<<b<<", ";
		if (b==3){
			cout<<"Countdown aborted!"<<endl;
			break;
			cout<<"info after break!" <<endl;
		}
	}
	cout <<"'break' jumps out the for loop and continue"<<endl;

	//continue statement
	cout << "\n continue statement:" << endl;
	for (int c=10; c>=0; c--){
		if(c ==5) continue;
		cout<<c<<", ";
	}
	cout << endl;

	//structure data type
	cout<< "Create structure data type:" << endl;

	human john;
	cout<<"Enter name:"<<endl;
	cin>>john.name;
	cout<<"Enter age:"<<endl;
	cin>>john.age;
	cout<<"The information is: "<<john.name <<", "<<john.age<<endl;

	return 0;
}
