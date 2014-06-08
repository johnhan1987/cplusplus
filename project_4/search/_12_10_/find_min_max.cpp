#include <iostream>
#include <vector>
#include <random>


using namespace std;

//pair<int, int> find_min_max(const vector<int>& A) {
//	if (A.size() <=1) return {A.front(), A.front()};
//
//	pair<int, int> min_max_pair = {min(A[0], A[1]), max(A[0], A[1])};
//	for (int i =2; i+1<A.size();i+=2){
//		pair<int, int> local_pair = {min(A[i], A[i+1]), max(A[i], A[i+1])};
//		min_max_pair={min(min_max_pair.first, local_pair.first),
//			      max(min_max_pair.second, local_pair.second)};
//	
//	}
//	if(A.size() & 1){
//		min_max_pair = {min(min_max_pair.first, A.back()),
//				max(min_max_pair.second, A.back())};
//	}
//	return min_max_pair;
//
//}

int main(){
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(1, 100);
	cout<<distribution(generator)<<endl;
	return 0;
}
