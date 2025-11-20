#include<iostream>
using namespace std;

int date;
string month;
int year;
int age;

void DOB(){
	cout << "Enter date: " << endl;
	cin >> date;
	cout << "Enter month: " << endl;
	cin >> month;
	cout << "Year: " << endl;
	cin >> year;

	cout << date << " " << month << " " << year << endl;
	 cout << "----------------------------------------" << endl;

}

void Age(){
	age = 2025 - year;
	cout << "Your age is: " << age << endl;
	 cout << "----------------------------------------" << endl;
}

void eligible(){
	if(age >= 18){
		cout << "Yes you are eligible for voting" << endl;
	}
	else{
		cout << "Not eligible" << endl;
	}
	 cout << "----------------------------------------" << endl;
}

int main(){

	int choice;
	cout << "Welcome to the Government voting Website" << endl;
	    cout << "----------------------------------------" << endl;

	while(choice != 5){

		 cout << "----------------------------------------" << endl;
		
	    cout << "Enter 1 to Enter you DOB" << endl;
	    cout << "Enter 2 to calculate age" << endl;
	    cout << "Enter 3 to check Eligibilty" << endl;

	     cout << "----------------------------------------" << endl;

	    cin >> choice;

	    switch(choice){
	    case 1 : DOB();
	    	break;
	    case 2 : Age();
	    	break;
	    case 3 : eligible();
	    	break;
	    default : cout << "Exiting...." << endl;
	    	break;
	    }
	}
	

	return 0;
}