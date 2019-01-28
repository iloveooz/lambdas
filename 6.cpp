	// Листинг 6
	#include <algorithm>
	#include <cstdlib>
	#include <iostream>
	#include <iterator>
	#include <numeric>
	#include <vector>
	 
	int main() {
		std::vector <int> srcVec;
		
		for (int val = 0; val < 10; val++) {
			srcVec.push_back(val);
		}
	 
		int lowerBound = 0, upperBound = 0;
		
		std::cout << "Enter the value range: ";
		std::cin >> lowerBound >> upperBound;
	 
		int result = 
			count_if(srcVec.begin(), srcVec.end(),
					 [lowerBound, upperBound] (int _n)
			{
				return lowerBound <= _n && _n < upperBound;
			});
		std::cout << result << '\n';
	 
		return EXIT_SUCCESS;
	}
	
	// «список захвата» (capture list)
