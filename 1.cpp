	// Листинг 1
	#include <algorithm>
	#include <cstdlib>
	#include <iostream>
	#include <vector>
	 
	int main() {
		std::vector <int> srcVec;
		
		for (int val = 0; val < 10; val++) {
			srcVec.push_back(val);
		}
	 
		for_each(srcVec.begin(), srcVec.end(), [](int _n) -> double {
			std::cout << _n << " ";
		});
		std::cout << '\n';
	 
		return EXIT_SUCCESS;
	}
