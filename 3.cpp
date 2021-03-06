#include "pch.h"
#include <iostream>

//проверяем символ по координатам, если равен нулю  - меняем
void changer(int arrai[15][15], int n, int m, int input){
	if (arrai[n][m] == 0) arrai[n][m] = input;
	if (arrai[n - 1][m] == 0) changer(arrai, n - 1, m, input);
	if (arrai[n + 1][m] == 0) changer(arrai, n + 1, m, input);
	if (arrai[n][m - 1] == 0) changer(arrai, n, m - 1, input);
	if (arrai[n][m + 1] == 0) changer(arrai, n, m + 1, input);
}

//функция для отрисовки, чтобы не писать два раза
void paint(int arrai[15][15]){//наш массив
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			std::cout << arrai[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

int main() {
	int n, m, input;
	std::cin >> n >> m >> input;

	int arrai[15][15] =
	{ 
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,},
		{1,0,0,0,0,1,1,1,1,0,0,0,0,0,1,},
		{1,0,0,0,1,0,0,0,0,1,1,1,0,0,1,},
		{1,0,0,1,0,0,0,0,0,0,0,1,0,0,1,},
		{1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,},
		{1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,},
		{1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,},
		{1,0,1,0,0,0,0,0,0,0,1,0,0,0,1,},
		{1,0,1,0,0,0,0,0,0,0,1,0,0,0,1,},
		{1,0,1,0,0,0,0,0,0,0,1,0,0,0,1,},
		{1,0,1,0,0,0,1,1,0,0,0,1,0,0,1,},
		{1,0,1,1,1,1,0,0,1,1,1,0,0,0,1,},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,} 
	};

	paint(arrai);//рисуем массив

	changer(arrai, n, m, input);//меняем массив

	paint(arrai);//рисуем новый массив
}