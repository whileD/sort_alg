#include <iostream>
#include <vector> 
#include "randgen.cpp"

using namespace std;

void bubble(vector<int>& v){
	for(int i = v.size()-1; i>0;  i--){
		for(int j=0; j<i; j++){
			if(v[j] > v[j+1]){
				swap(v[j], v[j+1]);
			}
		}
	}				
}

int main(){
	vector<int> nums = rand_int_list();
	bubble(nums);

	for(int i=0; i<nums.size(); i++){
		cout << nums[i] << endl;
	}
}

