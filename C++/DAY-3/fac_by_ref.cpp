#include<iostream>
using namespace std;

void factorial(int &n){
	int fact = 1;
	for(int i = n; i > 0; i--){
		fact = fact * i;
	}

	cout << "factorial is: " << fact << endl;
}

int main(){
	int n;
	cout << "Enter number: " << endl;
	cin >> n;

	factorial(n);

	return 0;
}