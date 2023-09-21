#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int x, y, x1, y1, key = 0;

	setlocale(0, "");

	// Ввод X и Y карты
	cout << "Введите X карты - ";
	cin >> x;
	cout << "Введите Y карты - ";
	cin >> y;

	//модуль чистки
	system("pause");
	system("cls");

	x = abs(x);
	y = abs(y);

	// Создание двумерного динамического массива 
	string** arr = new string * [y + 2];
	for (int i = 0; i < y + 2; i++)
	{
		arr[i] = new string[x + 2];
	}

	// Записись в массив координатной плоскости
	for (int i = 0; i < y + 2; i++) {
		if (i == 0 or i == y + 1) {
			for (int j = 0; j < x + 2; j++) {
				arr[i][j] = "# ";
			}
		}
		else {
			for (int j = 0; j < x + 2; j++) {
				if (j == 0 or j == x + 1) {
					arr[i][j] = "# ";
				}
				else {
					arr[i][j] = "  ";
				}
			}
		}
	}
	//Спавн точки 
	y1 = (y + 1) / 2;
	x1 = (x + 1) / 2;
	arr[y1][x1] = "* ";

	while (true) {

		// Вывод массива
		for (int i = 0; i < y + 2; i++) {
			for (int j = 0; j < x + 2; j++) {
				cout << arr[i][j];
			}
			cout << "\n";
		}

		//Ход

		cout << "Сделайте ход\n";
		key = _getch();

		switch (key)
		{
		//Вверх
		case 119:
		case 72:
		{
			if (y1 - 1 == 0) {
				break;
			}
			else {
				arr[y1][x1] = "  ";
				y1 = y1 - 1;
				arr[y1][x1] = "* ";
				break;
			}
		}
		//Вниз
		case 115:
		case 80:
		{
			if (y1 + 1 == y + 1) {
				break;
			}
			else {
				arr[y1][x1] = "  ";
				y1 = y1 + 1;
				arr[y1][x1] = "* ";
				break;
			}
		}
		//Вправо
		case 100:
		case 77:
		{
			if (x1 + 1 == x + 1) {
				break;
			}
			else {
				arr[y1][x1] = "  ";
				x1 = x1 + 1;
				arr[y1][x1] = "* ";
				break;
			}
		}
		//Влево
		case 97:
		case 75:
		{
			if (x1 - 1 == 0) {
				break;
			}
			else {
				arr[y1][x1] = "  ";
				x1 = x1 - 1;
				arr[y1][x1] = "* ";
				break;
			}
		}

		default:
			break;
		}


		//модуль чистки
		system("cls");

	}
	


}
