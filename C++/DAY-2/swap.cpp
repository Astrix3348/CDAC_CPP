#include<iostream>
using namespace std;

void swapByValue(int x, int y){
	int temp = x;
	x = y;
	y = temp;

    cout << x << "--" << y << endl;

}

void swapByReference(int *xptr, int *yptr){
	int temp = *xptr;
	*xptr = *yptr;
	*yptr = temp;

	cout << *xptr << "--" << *yptr << endl;
}

int main(){
	int x, y;
	cin >> x >> y;
	// swapByValue(x, y);

	swapByReference(&x, &y);

	return 0;
}