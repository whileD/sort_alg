#include <iostream>
#include <random>
#include <vector> 
#include "randgen.cpp"
using namespace std;

int main(){
    vector<int> nums = rand_int_list();

    int tmp;
    for(int i = (int)nums.size() - 1; i > 0 ; --i){
        for(int j = 0; j < i; ++j){
            if(nums[j]> nums[j+1]){
                tmp = nums[j+1];
                nums[j+1] =  nums[j];
                nums[j] =  tmp;         
            }
        }
    }

    //Output
    for(int i = 0 ; i < (int)nums.size(); i++){
        cout << nums.at(i) << "\t";
    }
    cout << endl;

    return 0;
}

