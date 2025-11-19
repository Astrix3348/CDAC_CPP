//Q7. count the number of odd and even digits in a number
#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int even = 0, odd = 0;

	while(n > 0){
		int digit = n % 10;
		if(digit % 2 == 0){
			even++;
		}
		else{
			odd++;
		}
		n = n / 10;
	}

	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;

	return 0;
}