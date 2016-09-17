#include <iostream>
#include <vector>
#include <random>
using namespace std;

vector<int> bucket(vector<int> nums, int max){
	vector<int> bucket(max+1);
	//bucket
	for(int i = 0; i < nums.size(); ++i){
		++bucket[nums[i]];
	}

	//for in
	nums.clear();
	for(int i = 0; i < max; ++i){
		if(bucket[i] != 0){
			for(int j = 0; j < bucket[i]; ++j){
				nums.push_back(i);
			}
		}
	}

	return nums;
}

void sout(vector<int> num){
	for(int i = 0; i < (int)num.size(); ++i){
		cout << num[i] << "\t";
	}
	cout << endl;
}

int main(){
	vector<int> nums;
	int max = 25;

	random_device rd;
	mt19937 rand(rd());
	uniform_int_distribution<> num(1,max);
	for(int i = 0; i < 25; ++i){
		nums.push_back(num(rand));
	}
	
	sout(nums);
	nums = bucket(nums, max);
	sout(nums);

	return 0;
}

