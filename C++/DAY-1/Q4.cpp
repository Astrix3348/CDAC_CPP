//Q4. Factorial using loop
#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int fac = 1;
	
	for(int i = n; i > 0; i--){
		fac = fac*i; //fac = fac + fac*i;
	}
	//fac = fac * i; fac = 1
	//fac = 2
	//fac = 6
	//fac = 24
	//fac = 24 * 5 = 120

	cout << fac << endl;


	return 0;
}