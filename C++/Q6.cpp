//Q6. find the frequency of digits(0-9) occurs in a number
#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int num = n;
	int count = 0;
	while(n > 0){
		count++;
		n = n/10;
	}

	int arr[count];
	for(int i = 0; i < count; i++){
		arr[i] = num%10;
		num = num/10;
	}
	

	int freq = 1;
	for(int i = 1; i < count; i++){
		if(arr[i-1]!=arr[i]){
			freq = 1;
		}
		else{
			freq++;
		}
	}

	cout << freq << endl;
	
	return 0;
}