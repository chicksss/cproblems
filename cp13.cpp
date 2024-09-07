#include <iostream>


using namespace std;


//Write a C++ program to check if two given non-negative integers have the same last digit.
//Sample Input:
//123, 456
//12, 512
//7, 87
//12, 45
//Sample Output:
//0
//1
//1
//0



class Solve{
	public: 
	int num1, num2;
	
	
	void show(){
		
		 int lastDN = num1 % 10;
		int lastDb = num2 % 10;
		
		if(lastDN == lastDb){
			cout<<"1";
			
		}else{
			cout<<"0";
		}
		
	}
	
};

int main (){
	
	Solve* s = new Solve;
	
	
 
		int a,b;
	 cout<<"enter: " <<endl;
	 cin>> a >> b;
	 s->num1 = a;
	 s->num2 = b;
	 
	 s->show();
	 
	 delete s;
	 
	
	return 0;
}
