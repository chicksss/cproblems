#include <iostream>
#include <string>
#include <algorithm>

//Write a C++ program to check if the string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string.
//Sample Input:
//"Python"
//"ytade"
//"jsues"
//Sample Output:
//Phon
//ytade
//jsues

using namespace std;

class Solve{
	public:
		
		string word;
		
		void show(){
			
		reverse(word.begin(), word.end());
			cout<<"Reversed string: "<<word;
		}
	
};


int main (){
	string w;
	Solve* s = new Solve();


	cout<<"enter a word"; 
	cin>>w;
	
	s->word  = w; 
	
	
	
	s->show();
	delete s;
	return 0;
}
