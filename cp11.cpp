#include <iostream>



// Write a C++ program to find the larger value from two positive integer values that is in the range 20..30 inclusive. Also, return 0 if neither is in that range.
//Sample Input:
//78, 95
//20, 30
//21, 25
//28, 28
//Sample Output:
//0
//30
//25
//28


using namespace std;

class Solve{
	public: 
	
	int n,m;
	
	void show(){
		if(n>=20 && n <= 30){
			int s = max(n,m);
			 
				cout<<"1"<<endl;
		 
		}else{
			cout<<"0"<<endl;
		}
	}
	
};

int main (){
	
	Solve* s = new Solve;
	int a,v; 
	cout<<"Enter a number: "<< endl;
	cin>> a >> v;
	
	s->m = a;
	s->n = v;
	
	s->show();
	
	
	
	delete s;
	return 0;
}
