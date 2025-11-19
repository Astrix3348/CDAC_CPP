//Q6. find the frequency of digits(0-9) occurs in a number
#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int num = n;

	int arr[10] = {0,0,0,0,0,0,0,0,0,0};

	int count = 0;

	while(n>0){
		count++;
		n = n/10;
	}

	while(num>0){
		int digit = num%10;
		arr[digit]++;
		num = num/10;
	}

	for(int i = 0; i < 10; i++){
		cout << i << "-->" << arr[i] << endl;
	}
	
	return 0;
}
