#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>


double max__elem(double first, double second, double third) {
	std::vector<double> v{ first, second, third };
	return *std::max_element(v.begin(), v.end());
}

int main(){
	double first, second, third;
	
	std::cout << "enter numbers: ";
	std::cin >> first >> second >> third;
	std::cout << -max__elem(first, second, third);

	//std::vector<double> v{ first, second, third };
	//std::cout << -*std::max_element(v.begin(), v.end());
}
