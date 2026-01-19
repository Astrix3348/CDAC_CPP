#include<iostream>
using namespace std;

int factorial(int n){
	if(n==1 || n==0){
		return 1;
	}
	return n * factorial(n-1);
}

int main(){

	int n;
	cout << "enter number: ";
	cin >> n;

	int fac = factorial(n);

	cout << fac << endl;

	return 0;
}