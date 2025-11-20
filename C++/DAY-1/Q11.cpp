//Q11. Print the factors of a number

#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int i = 1; i < n; i++){
		if((n % i) == 0){
			cout << n / i << " ";
		}
	}
	cout << "1" << endl;
	
	return 0;
}