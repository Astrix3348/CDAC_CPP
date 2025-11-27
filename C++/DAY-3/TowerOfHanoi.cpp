#include<iostream>
#include<stack>
using namespace std;

void tower(int n, char src, char dest, char aux){
	if(n == 1){
		cout <<"moving " << n << " : from " << src << " to " << dest << endl;
	}
	else{
		tower(n-1, src, aux, dest);
		cout <<"moving " << n << " : from " << src << " to " << dest << endl;
		tower(n-1, aux, dest, src);
	}
}

int main(){
	int n;
	cout<< "enter disks: ";
	cin >> n;

	char src = 'A';
	char dest = 'C';
	char aux = 'B';

	tower(n, src, dest, aux);

	
	return 0;
}