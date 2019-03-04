#include "pch.h"
#include <iostream>

int fib(int input) {
	if (input == 0) return 0;
	if (input == 1 || input == 2) return 1;
	return fib(input - 1) + fib(input - 2);
}

int __fib(int input) {
	unsigned long oldValue = 0;
	unsigned long value = 1;
	unsigned long hold;
	for (int n = 1; n < input; n++) {
		hold = value;
		value += oldValue;
		oldValue = hold;
	}
	return value;
}

int main() {
	int input;
	std::cin >> input;
	std::cout << fib(input);
	std::cout << " " << __fib(input);
}
