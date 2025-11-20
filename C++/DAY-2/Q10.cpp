#include<iostream>
using namespace std;

static int balance = 0;
vector<string> statements;

void checkBalance(){
	cout << "Your balance is: " << balance << endl;
	cout << "Thank You!..." << endl;
}

void deposit(){
	cout << "How much do you want to deposit?" << endl;
	int amount;
	cin >> amount;
	balance += amount;
	cout << amount << " deposited" << endl;
	statements.push_back("You deposited: " + to_string(amount));
}

void withdraw(){
	cout << "How much do you want to withdraw?" << endl;
	int amount;
	cin >> amount;
	balance -= amount;
	cout << amount << " withdrawn" << endl;
	statements.push_back("You withdrew: " + to_string(amount));
}

void miniStatement(){
	cout << "-------Mini Statement---------" << endl;
	for(string s : statements){
		cout << s << endl;
	}
	cout << "------------------------------" << endl;
}

int main(){
	int choice;

    while(choice != 5){

    	cout << "--------------------" << endl;
		cout << "Welcome to the bank!..." << endl;
		cout << "--------------------" << endl;
		cout << "What do you want to do?" << endl;
		cout << "--------------------" << endl;
		cout << "Enter 1 to checkBalance" << endl;
		cout << "Enter 2 to deposit money" << endl;
		cout << "Enter 3 to withdraw money" << endl;
		cout << "Enter 4 to generate statement" << endl;
		cout << "--------------------" << endl;
		cout << endl;

		cin >> choice;

		switch(choice){
		case 1 : checkBalance();
			break;
		case 2 : deposit();
			break;
		case 3 : withdraw();
			break;
		case 4 : miniStatement();
			break;
		default : cout << "GoodBye..." << endl;
			break;
		}
    }



	


	return 0;
}