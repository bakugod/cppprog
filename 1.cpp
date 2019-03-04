#include "pch.h"
#include <iostream>

long double fact(int input, int accum = 1) {
	if (input == 0) return accum;
	else return fact(input - 1, input*accum);
}

int main() {
	int input;
	std::cin >> input;
	if (input > 30 || input < 0) std::cout << "I can't do it!!!";
	else std::cout << fact(input);
}
