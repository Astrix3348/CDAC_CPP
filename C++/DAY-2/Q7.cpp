#include<iostream>
using namespace std;

void printAll(int x, int y){
	for(int i = x; i <= y; i++){
		cout << i << "--";
	}
}

int main(){
	int x,y;
	cout << "Enter the first num: ";
	cin >> x;

	cout << "Enter the second num: ";
	cin >> y;

	printAll(x, y);

	return 0;
}