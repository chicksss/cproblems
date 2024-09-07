#include <iostream>

using namespace std;


class Solve{
	public: 
		int m;
		
		
		void show(){
			
		}
	
};

int main (){
	
	Solve* s = new Solve;
	cout<<"Enter a number: ";
	int c; 
	cin>>c;
	
	
	s->m = c;
	
	
	s->show();
	
	
	return 0;
}
