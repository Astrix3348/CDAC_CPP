//Q12. Find the GCD of two numbers
#include<iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	int val = 0;

	int res = a < b ? a : b;

	for(int i = 1; i < res; i++){
		if(a % i == 0 && b % i == 0){
			val = i;
		}
	}

	cout << val << endl;

	return 0;
}