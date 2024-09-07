#include <iostream>


using namespace std;

 
//
//. Write a C++ program to create the string which is n (non-negative integer) copies of a given string.
//Sample Input:
//"JS", 2
//"JS", 3
//"JS", 1
//Sample Output:
//JSJS
//JSJSJS
//JS



class Solve{
	public: 
	int num1;
	string name;
	
	
	void show(){
		
		for(int i=1; i<=num1; i++){
			cout<<name<<endl;
		}
		
	 
		
	}
	
};

int main (){
	
	int n;
	string w;
	Solve* s = new Solve;
	
	cout<<"Enter a word and the copy of number: "<< endl;
	cin>>n;
	cout<<"Enter a word: "<< endl;
	cin>>w;
	
	s->num1 = n;
	s->name = w;
	
	 s->show();
	 
	 delete s;
	 
	
	return 0;
}
