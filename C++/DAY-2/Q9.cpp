#include<iostream>
using namespace std;

void bill(int unit){
	int total_bill = 0;
	if(unit<=100){
		total_bill = 3*unit;
		cout<<total_bill;

	}
    else if(unit>100 && unit<200){
    	total_bill = (3*100) + ((unit-100)*4.5);
    	cout<<total_bill;

    }
    else if(unit>=200){
    	total_bill = (3*100)+(100*4.5)+((unit-200)*6);
    	cout<<total_bill;
    }

}

int main(){
	int unit;
	cout << "Enter the units: ";
	cin >> unit;

	bill(unit);

	return 0;
}