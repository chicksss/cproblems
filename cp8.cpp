#include<iostream>

using namespace std; 
//
//
//Write a C++ program to check which number is closest to the value 100 among two given integers. Return 0 if the two numbers are equal.
//Sample Input:
//78, 95
//95, 95
//99, 70
//Sample Output:
//95
//0
//99 


class Num{
	
	public:
		int num1,num2;
		
		void show(){
			if(num1 < num2){
				 cout << num2;
			}else if(num1 > num2){
				cout<< num1;
			}else{
				cout<<"0";
			}
		}
};

int main (){
	
	int number1, number2;
	Num* s = new Num;
	
	cout<<"Enter a number: " << endl;
	cin>> number1 >> number2;
	s->num1 = number1;
	s->num2 = number2;
	
	s->show();
	
	
	delete s;
	return 0; 
}
