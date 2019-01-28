	// Листинг 2
	#include <algorithm> 
	#include <cstdlib> 
	#include <iostream> 
	#include <vector>
	 
	class MyLambda  {
	public:
		void operator () (int _x) const { 
			std::cout << _x << " ";
		} 
	};
	 
	int main()  {
		std::vector <int> srcVec; 
		for (int val = 0; val < 10; val++) { 
			srcVec.push_back(val); 
		}
	 
		for_each(srcVec.begin(), srcVec.end(), MyLambda()); 
		std::cout << '\n';
	  
		return EXIT_SUCCESS;
	}
