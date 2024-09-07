#include<iostream>

using namespace std; 

//Write a C++ program to count the string "aa" in a given string and assume "aaa" contains two "aa".
//Sample Input:
//"bbaaccaag"
//"jjkiaaasew"
//"JSaaakoiaa"
//Sample Output:
//2
//2
//3



class Solve{
	public: 
	string word;
	int c = 0;
	void show(){
		cout<<"Ouput : "<< word <<endl; 
		
		
		for(int i = 0; i< word.length()-1 ; i++){
			if(word.substr(i,2) == "aa"){
				c++;
			}
			cout<<c;
		
		}
		
	}
};

int main (){
	
	string q;
	Solve* s = new Solve;
	
	cout<<"Enter a number: "<<endl; 
	cin>> q;
	
	s->word = q;
	
	
	s->show();
	
	delete s;
	return 0;
}
