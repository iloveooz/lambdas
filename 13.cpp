// Листинг 13
#include <algorithm>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>
 
// using std::tr1::function;
 
int main() {
	std::vector<int> myVec;
	
	int init = 0;
	
	generate_n(back_inserter(myVec), 10, [&] {
		return init++;
	});
 
	std::function <void (int)> traceLambda = [] (int _val) -> void {
			                               std::cout << _val << " ";
		                                };
 
	for_each(myVec.begin(), myVec.end(), traceLambda);
	std::cout << '\n';
 
	std::function <std::function<int (int)> (int)> lambdaGen =
		[] (int _val) -> std::function<int (int)> {
			return [_val] (int _n) -> int { return _n + _val; };
		};
 
	transform(myVec.begin(), myVec.end(), myVec.begin(), lambdaGen(2));
	
	for_each(myVec.begin(), myVec.end(), traceLambda);
	
	std::cout << '\n';
 
	return EXIT_SUCCESS;
}
