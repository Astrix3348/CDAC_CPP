#include<iostream>
using namespace std;

int main(){
	int row, col;
	cout << "enter row and column: ";
	cin >> row >> col;

	int arr[row][col];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout << "enter value for: " << "arr" << i << "-" << j << ":  ";
			cin >> arr[i][j];
		}
	}
	int temp[row][col];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			temp[j][i] = arr[i][j];
		}
	}

	for(int i = 0; i<row; i++){
		for(int j = 0; j < col; j++){
			cout << temp[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}