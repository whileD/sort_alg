#include<vector>
#include<random>

const int MAX_NUMBER = 100;
const int DEFAULT_LENGTH = 30;

std::vector<int> rand_int_list();
std::vector<int> rand_int_list(int n);


std::vector<int> rand_int_list(){
	return rand_int_list(DEFAULT_LENGTH);
}

std::vector<int> rand_int_list(int n){
	std::vector<int> v(n, 0);
	std::random_device seed_gen;
	std::mt19937 mt(seed_gen());
	std::uniform_int_distribution<> dist(0, MAX_NUMBER);

	for (int i=0; i<n; i++) v[i] = dist(mt);
	return v;
}
