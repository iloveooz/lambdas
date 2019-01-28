	// Листинг 7
	#include <algorithm>
	#include <cstdlib>
	#include <iostream>
	#include <iterator>
	#include <vector>
	 
	class MyLambda {
	public:
		MyLambda(int _lowerBound, int _upperBound)
			: m_lowerBound(_lowerBound), m_upperBound(_upperBound) {}
	 
		bool operator () (int _n) const {
			return m_lowerBound <= _n && _n < m_upperBound;
		}
	private:
		int m_lowerBound, m_upperBound;
	};
	 
	int main() {
		std::vector <int> srcVec;
		for (int val = 0; val < 10; val++) {
			srcVec.push_back(val);
		}
	 	int lowerBound = 0, upperBound = 0;
		
		std::cout << "Enter the value range: ";
		std::cin >> lowerBound >> upperBound;
	 
		int result = count_if(srcVec.begin(), srcVec.end(),
							  MyLambda(lowerBound, upperBound));
		std::cout << result << '\n';
	 
		return EXIT_SUCCESS;
	}
