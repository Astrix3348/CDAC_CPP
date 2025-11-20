//Q10. Find all the numbers divisible by 3 between 1 to N

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	while(n > 0){
		if(n % 3 == 0){
			cout << n << " ";
		}
		n--;
	}

	return 0;
}