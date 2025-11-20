//Greatest of three numbers
#include<iostream>
using namespace std;

int main(){
	int a, b, c;

	cout << "Enter the first digit: ";
	cin >> a;
	cout << "Enter the second digit: ";
	cin >> b;
	cout << "Enter the third digit: ";
	cin >> c;

	if(a > b){
		if(a > c){
			cout << "greatest is: " << a << endl;
		}
	}
	else if(b > c){	
			cout << "The greatest is: " << b << endl;
	}
	else{
		cout << "The greatest is: " << c << endl;
	}

	
	return 0;
}