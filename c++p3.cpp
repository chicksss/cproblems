#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int num1, num2; 
	
	
	cout<<"enter a number: "<<endl;
	cin >> num1;
	cin >> num2;
	
	int sum = num1  + num2;
	
	if(sum >= 30){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	
	
	
	return 0;
}
