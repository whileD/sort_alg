#include <iostream>
#include <random>
#include <vector> 
using namespace std;

int main(){
    vector<int> nums;
    
    //Random number
    random_device seed_gen;
    mt19937 mtrd(seed_gen());

    for(int i = 0; i < 10; i++){
        nums.push_back(mtrd());
    }
   

    int tmp;
    for(int i = (int)nums.size() - 1; i > 0 ; --i){
        for(int j = 0; j < i; ++j){
            if(nums.at(j) > nums.at(j+1)){
                tmp = nums.at(j+1);
                nums[j+1] =  nums.at(j);
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

