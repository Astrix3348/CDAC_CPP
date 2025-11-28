#include<iostream>

using namespace std;

struct employee{
	int emp_id;
	string emp_name;
	string design;
	string department;
	int salary;
};

int countEmp(employee emp[], int num){
	int count = 0;
	for(int i = 0; i < num; i++){
		if(emp[i].department == "sales"){
			count++;
		}
	}
	return count;
}

void display(employee emp[], int num){

	for(int i = 0; i < num; i++){
		cout << "id: " << emp[i].emp_id << endl;
		cout << "name: " << emp[i].emp_name << endl;
		cout << "designation: " << emp[i].design << endl;
		cout << "department: " << emp[i].department << endl;
		cout << "salary: " << emp[i].salary << endl;
		cout << endl;
	}
}

void getInfo(){
	int num;
	cout << "how many employees? ";
	cin >> num;
	cout << endl;
	employee emp[num];

	for(int i = 0; i < num; i++){

		cout << "Enter employee id: ";
	    cin >> emp[i].emp_id;
	    cout << "Enter employee name: ";
	    cin >> emp[i].emp_name;
	    cout << "Enter emp designation: ";
	    cin >> emp[i].design;
	    cout << "Enter employee department: ";
	    cin >> emp[i].department;
	    cout << "Enter emp salary: ";
	    cin >> emp[i].salary;

	    cout << endl;

	}

	display(emp, num);
	cout << "the employees working under sales are: " << countEmp(emp, num) << endl;
	
}


int main(){
	getInfo();

	return 0;
}
