#include<iostream>
using namespace std;

void calculator(int x, int y, char op){
    

	switch(op){
	case '+': cout << "addition is: " << (x + y) << endl;
		break;
    case '-' : cout << "subtraction is: " << (x - y) << endl;
		break;
    case '*' : cout << "multiplication is: " << (x * y) << endl;
		break;
	case '/' : cout << "division is: " << (x / y) << endl;
		break;	
	}
}

int main(){

	int x,y;

	cout << "enter first number: " << endl;
	cin >> x;
	cout << "enter second number: " << endl;
	cin>> y;

	char op;
	cout << "enter which operation to perform: ";
	cin >> op;
	cout << endl;

	calculator(x,y,op);



	return 0;
}