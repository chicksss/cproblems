#include <iostream>
 
using namespace std;
//
//Write a C++ program to check if a given string contains between 2 and 4 'z' characters.
//Sample Input:
//"frizz"
//"zane"
//"Zazz"
//"false"
//Sample Output:
//1
//0
//1
//0



class Solve {
    public:
        string theWOrd;
         

        void show() {
        	
        	
        	 // Directly access each character using array indexing
			    for (int i = 0; i < theWOrd.size(); i++) {
			        if(theWOrd[i] == 'z'){
			        	cout<<"1"<<endl;
			        	break;
					}else{
						cout<<"0"<<endl;
						break;
					}
			    }
        }
};


int main (){
	
	string name;
	Solve* s = new Solve;
	cout<<"Enter a word: "<<endl;
	cin>>name;
	
	s->theWOrd = name;
	
	
	
	
	s->show();
	
	
	
	delete s;
	return 0;
}
