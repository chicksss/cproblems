#include <iostream>

using namespace std;


//Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.
//Sample Input:
//78, 95
//25, 35
//40, 50
//55, 60
//Sample Output:
//0
//0
//1


class Solve{
	public:
		int n,m;
		
		
		void show(){
			
			if((n>=40 && n<=60)){
				cout<<"1: ";
			}else{
				cout<<"0";
			}
			
		}
};

int main(){
	
	int a,b;
	Solve* s = new Solve();
	cout<<"enter a number:  " <<endl;
	cin>> a >> b;
	
	
	s->n = a;
	s->m = b;
	
	s->show();
	
	
	delete s;
	return 0;
}
