#include <iostream>


//Write a C++ program to compare two given strings and return the number of positions where they contain the same length 2 substring.
//Sample Input:
//{ 5, 5, 1, 15, 15 }
//{ 15, 2, 3, 4, 15 }
//{ 3, 3, 15, 15, 5, 5}
//{ 1, 5, 15, 7, 8, 15}
//Sample Output:
//1
//0
//1
//0

using namespace std;


int main(){
	
	int nums[] = {5,5,5,1,15,15};
	int arrL = sizeof(nums) / sizeof(nums[0]);
	for (int i = 0; i< arrL-1; i++){
		if(nums[i+1] == nums[i] && nums[i] == 15){
			cout<<"1";
		}
	}
 
	
	
	
	return 0;
	
}
