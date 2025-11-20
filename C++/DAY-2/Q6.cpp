#include<iostream>
using namespace std;

char grade(int sub1, int sub2){
	int avg = (sub1 + sub2) / 2;
	if(avg >= 90){
		return 'A';
	}
	else if(avg > 70 && avg < 80){
		return 'B';
	}
	else{
		return 'C';
	}
}

int main(){

	int mark1, mark2;
	cout << "enter mark1: ";
	cin >> mark1;
	cout << "enter mark2: ";
	cin >> mark2;

	char theGrade = grade(mark1, mark2);
	cout << "the grade is: " << theGrade;

	return 0;
}