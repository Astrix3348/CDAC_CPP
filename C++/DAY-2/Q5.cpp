#include<iostream>
using namespace std;

int simpleInterest(int p, int r, int t){
	return (p*r*t);
}

int main(){
	int p,r,t;
	cout << "enter principal: ";
	cin >> p;
	cout << "enter rate: ";
	cin >> r;
	cout << "enter time: ";
	cin >> t;

	int value = simpleInterest(p,r,t);

	cout << value << endl;

	return 0;
}