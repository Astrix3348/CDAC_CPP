#include<iostream>
using namespace std;

struct Student{
	string name;
	int prn;
	string email;
};

typedef struct{
	string name;
	int prn;
	string email;

}Checking;

void callByRef(Checking *c){
	cout << "======Using TypeDef======" << endl;
	cout << c->name << endl;
	cout << c->prn << endl;
	cout << c->email << endl;
}

void callByValue(struct Student ss){
	cout <<"Your name is: "<< ss.name << endl;
	cout << "Your prn is: " << ss.prn<<endl;
	cout << "Your email is: " << ss.email << endl;
}

void callByReference(struct Student &ss){
	cout << "name is:" << ss.name << endl;
	cout << "Your prn is: " << ss.prn<<endl;
	cout << "Your email is: " << ss.email << endl;
}

void callByAddress(struct Student *ss){
	cout << ss->name << endl;
	cout << ss->prn << endl;
	cout << ss->email << endl;
}

int main(){
    Checking st;
	cout << "enter name: ";
	cout << "enter prn: ";
	cout << "enter email: ";
	cin >> st.name >> st.prn >> st.email;
	
	callByRef(&st);
	

	return 0;
}