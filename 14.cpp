	#include <iostream>

	#include <functional>
	#include <algorithm>
	
	int main() {
		
		auto hello = [] () {
		// std::function <std::string()> hello = [] () {
			static int num = 0;
			std::cout << "hello: " << num << " " << '\n';
			++num;
			return "return";
		};
		
		// hello;
		
		std::cout << hello << '\n';
		
		hello(); // возвращать нечего
		
		std::cout << hello() << '\n';
		
		auto sum1 = [](int x, int y) {
			return x + y;
		};
		
		std::cout << sum1(2, 3) << '\n';
		
		std::function <int (int, int)> sum2 = [](int x, int y) {
			return x + y;
		};
		
		std::cout << sum2(3, 4) << '\n';
		
		int i = 3;
		int j = 5;
		
		std::function <int (void)> paite = [i, &j] {
			return i + j;
		};
		
		i = 22;
		j = 44;
		
		// i - уже скопировано
		// j - берется последнее значение
		
		std::cout << "paite(): " << paite() << '\n';
		
		int aod = [] (int x, int y) {
			return x + y; 
		} (5, 4);
		
		std::cout << "aod: " << aod << '\n';
		
		int arr[] = { 1, 2, 3, 4, 5, 6 };
		
		std::for_each(arr, arr + 6, [] (int x) {
			std::cout << x << ", ";
		});
		
		std::cout << '\n';
				
		return EXIT_SUCCESS;
	}
		
