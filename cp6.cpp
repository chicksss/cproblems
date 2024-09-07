#include <iostream>

using namespace std;

class Solve{
	public: 
		int n1,n2,n3;
		
		
		void show(){
			if((n1>=20 && n1<=50) || (n2>=20 && n2 <=50) || (n3>=20 && n3 <=50)){
				cout<<"true";
				
			}else{
				cout<<"false";
			}
		}
};


int main(){
	
	Solve* s = new Solve();
	int q,w,y;
	
	cin>>q>>w>>y;
	
	s->n1 = q;
	s->n2 = w;
	s->n3 = y;
	
	s->show();
	
	delete s;
	 
	return 0;
}


//problem
//
//Write a C++ program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the range, otherwise false.
//Sample Input:
//11, 20, 12
//30, 30, 17
//25, 35, 50
//15, 12, 8
//Sample Output:
//1
//1
//1
//0
