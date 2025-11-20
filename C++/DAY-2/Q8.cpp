#include<iostream>
using namespace std;

int findMax(int num){
	int max = 0;
	while(num > 0){
		int digit = num % 10;
		if(digit> max){
			max = digit;
		}
		num = num/10;
	}
	return max;
}

int main(){
	int num;
	cout << "enter the number: ";
	cin >> num;

	int theMax = findMax(num);

	cout << "max element is: " << theMax << endl;

	return 0;
}