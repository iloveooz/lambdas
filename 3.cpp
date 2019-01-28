
	#include <algorithm>
	#include <cstdlib>
	#include <iostream>
	#include <vector>
	
	int main() {
		std::vector <int> srcVec;
		for (int i = 0; i < 10; i++) {
			srcVec.push_back(i);
		}
		
		int result = count_if(srcVec.begin(), srcVec.end(), [] (int _n) {
			return (_n % 2) == 0;
		});
		
		std::cout << result << '\n';
		
		return EXIT_SUCCESS;
	}
		
		
	// В данном случае лямбда играет роль унарного предиката, 
	// то есть тип возвращаемого значения bool, 
	// хотя мы нигде этого не указывали.
