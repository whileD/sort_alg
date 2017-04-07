#include<iostream>
#include<vector>
#include"randgen.cpp"

using namespace std;

void bucket(vector<int>& v){
	vector<int> bucket(MAX_NUMBER+1, 0);
	for(int i=0; i<v.size(); i++) bucket[v[i]]++;
	v.clear();
	for(int i=0; i<bucket.size(); i++)
		if (bucket[i] != 0)
			for(int j=bucket[i]; j>-1; j--) v.push_back(i);
}

int main(){
	vector<int> nums = rand_int_list();
	
	bucket(nums);

	for(int i=0; i<nums.size(); i++){
		cout << nums[i] << endl;
	}
}

