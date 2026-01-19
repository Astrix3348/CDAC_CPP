#include <iostream>
using namespace std;

int main()
{
	int row, col;
	cout << "enter row and column for arr1: ";
	cin >> row >> col;

	int row2,col2;
	cout << "enter row and column for arr2: ";
	cin >> row2 >> col2;

	int arr1[row][col];
	int arr2[row2][col2];

	if(row != row2 || col != col2){
		 cout << "invalid";
	}
	else{
		for(int i = 0; i < row; i++){
	    	for(int j = 0; j < col; j++){
	    		
	    		cin >> arr1[i][j];
	    	}
        }

	    for(int i = 0; i < row2; i++){
	    	for(int j = 0; j < col2; j++){
	    		
	    		cin >> arr2[i][j];
	    		arr1[i][j] += arr2[i][j];
	    	}
	    }


		for (int i = 0; i < row; i++)
		{
			cout << "-----------" << endl;
			for (int j = 0; j < col; j++)
			{
				cout << "|" <<arr1[i][j] << "|" << " ";
			}
			cout << endl;
			cout << "-----------" << endl;
		}
    }


    
	return 0;
}