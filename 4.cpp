	
	#include <algorithm>
	#include <cstdlib>
	#include <iostream>
	#include <iterator>
	#include <vector>
	
	int main() {
		std::vector <int> srcVec;
		
		for (int i = 0; i < 10; i++) {
			srcVec.push_back(i);
		}
		
		std::vector <double> destVec;
		
		transform(srcVec.begin(), srcVec.end(), back_inserter(destVec), [] (int _n) -> double {
				if (_n < 5) return _n + 1.0;
				else if (_n % 2 == 0) return _n / 2.0;
				else return _n * _n;
			}
		);
		
		std::ostream_iterator <double> outIt(std::cout, " ");
		copy(destVec.begin(), destVec.end(), outIt);
		
		std::cout << '\n';
		
		return EXIT_SUCCESS;
	}
		
		
