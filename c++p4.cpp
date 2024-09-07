#include <iostream>
#include <cstring>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	string name; 
	
	cout<<"Enter a word"<<endl;
	
	cin>> name;
	
	

	
	if(name.length() < 2){
		

	cout<<name.length();
		
	}else{
		
	
	 for (int i =1; i< name.length(); i++){
	 	if(name.length()>=2){
	 		if(i>2){
	 			break;
			 }
		 }
	 	cout<<name[i];
	 	for(int c = 1; c < name.length() && c<4; c++){
	 	
	 		cout<<" "<<name[i]<<" ";
			}
	 }
		
		
	}
	
	
	return 0;
}
