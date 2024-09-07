#include <iostream>


using namespace std;


int main (){
	
	string n,c; 
	cout<<"enter: "<<endl;
	
	cin>>n;
	cin>>c;
	
	for(int i = n.length() - 2; i > 0; i--){
		if(n[i] == c[0]){
			n = n.erase(i,1);
			
		}
	
	}
		cout << n;
	
	
	
	
	
	return 0;
}
