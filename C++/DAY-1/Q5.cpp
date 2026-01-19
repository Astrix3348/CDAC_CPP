//Q5 check whether it is an armstrong number

#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int num = n;

	int sum = 0;

	while(n > 0){
		int i = n%10;
		sum += (i*i*i);
		n = n/10;
	}

	if(sum == num){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}

	return 0;
}
