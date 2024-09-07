#include<iostream>

using namespace std; 
// Write a C++ program to check the largest number among three given integers.
//Sample Input:
//1,2,3
//1,3,2
//1,1,1
//1,2,2
//Sample Output:
//3
//3
//1
//2 

class Num{
	public:
		int n,m,o;
		
		
		void show(){
			 
			 int s = max(n,max(m,o));
			 
			 cout<<s;
				 
			}
		
};



int main (){
	
	int q,w,e;
	Num* s = new Num;
	cout<<"Enter a number: "<<endl;
	cin>>q>>w>>e;
	s->n =  q;
	s->m =  w;
	s->o =  e;
	
	s->show();
 
 
 	delete s;
	return 0; 
}
