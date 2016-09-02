#include <iostream>
#include <random>
using namespace std;

int main(){
    int nums[10];
    //Random number
    random_device seed_gen;
    mt19937 mtrd(seed_gen());

    for(int i = 0; i < (int)(sizeof(nums)/sizeof(nums[0])); i++){
        nums[i] = mtrd();
    }
   

    int tmp;
    for(int i = (int)(sizeof(nums)/sizeof(nums[0])) - 1; i > 0 ; --i){
        for(int j = 0; j < i; ++j){
            if(nums[j] > nums[j+1]){
                tmp = nums[j+1];
                nums[j+1] =  nums[j];
                nums[j] = tmp;         
            }
        }
    }

    //Output
    for(int i = 0 ; i < (int)(sizeof(nums)/sizeof(nums[0])); i++){
        cout << nums[i] << "\t";
    }
    cout << endl;

    return 0;
}

