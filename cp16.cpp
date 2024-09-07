#include <iostream>

using namespace std;

//Write a C++ program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.
//Sample Input:
//{1,1,2,3,1}
//{1,1,2,4,1}
//{1,1,2,1,2,3}
//Sample Output:
//1
//0
//1



class Solve{
	public: 
		int m;
		
		
		void show(){
			
			for(int i = 1; i<=m; i++){
				cout<<"enter a nummber: " <<endl;
				cin>>i;
				if(i>4){
					cout<<"0";
				}else{
					for(int c = 1; c<=i; c++){
					cout<<c;
				}

				cout<<"1";
			 
				}
				
			}
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
