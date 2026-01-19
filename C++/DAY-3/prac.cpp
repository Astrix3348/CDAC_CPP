#include<iostream>

using namespace std;

void swap_by_ref(int *x, int *y); //we are declaring the function. function prototype

int main(){
	int n1, n2;
	n1 = 5, n2 = 6;

	swap_by_ref(&n1, &n2);
	return 0;
}

void swap_by_ref(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;

	cout << *x << endl;
	cout << *y << endl;
}
