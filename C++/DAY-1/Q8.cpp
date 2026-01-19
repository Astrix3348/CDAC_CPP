//Q8. Print the squares of the number from 1 to n
#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int i = 1;

	while(i <= n){
		int square = (i*i);
		cout << square << " ";
		i++;
	}
	
	return 0;
}