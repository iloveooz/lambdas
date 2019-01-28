	// Листинг 8
	#include <algorithm>
	#include <cstdlib>
	#include <iostream>
	#include <iterator>
	#include <numeric>
	#include <vector>
	  
	int main() {
		std::vector <int> srcVec;
		
		int init = 0;
		
		generate_n(back_inserter(srcVec), 10, [init] () mutable {
			return init++;
		});
	 
		std::ostream_iterator<int> outIt(std::cout, " ");
		copy(srcVec.begin(), srcVec.end(), outIt);
		
		std::cout << '\n' << "init: " << init << '\n';
	 
		return EXIT_SUCCESS;
	}

	// Если мы попытаемся изменить «захваченные» переменные внутри лямбды, 
	// нас ждет неудача, потому что по умолчанию генерируемый operator()() 
	// объявлен как const. Для того чтобы это обойти, мы можем указать 
	// спецификатор mutable


	// []                      // без захвата переменных из внешней области видимости
	// [=]                     // все переменные захватываются по значению
	// [&]                     // все переменные захватываются по ссылке
	// [x, y]                  // захват x и y по значению
	// [&x, &y]                // захват x и y по ссылке
	// [in, &out]              // захват in по значению, а out — по ссылке
	// [=, &out1, &out2]       // захват всех переменных по значению, кроме out1 и out2,	
							// которые захватываются по ссылке
	// [&, x, &y]              // захват всех переменных по ссылке, кроме x…
