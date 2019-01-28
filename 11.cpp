	// Листинг 11
	#include <algorithm>
	#include <cstdlib>
	#include <iostream>
	#include <iterator>
	#include <vector>
	 
	 
	class MyMegaInitializer {
	public:
		MyMegaInitializer(int _base, int _power)
			: m_val(_base), m_power(_power) {}
	 
		void initializeVector(std::vector<int> & _vec) {
			for_each(_vec.begin(), _vec.end(),
					 [this] (int & _val) mutable {
				_val = m_val;
				m_val *= m_power;
			});
		}
	 
	private:
		int m_val, m_power;
	};
	 
	int main() {
		std::vector<int> myVec(11);
		
		MyMegaInitializer initializer(1, 2);
		
		initializer.initializeVector(myVec);
		
		for_each(myVec.begin(), myVec.end(), [] (int _val) {
			std::cout << _val << " ";
		});
	
		std::cout << '\n';
	 
		return EXIT_SUCCESS;
	}
