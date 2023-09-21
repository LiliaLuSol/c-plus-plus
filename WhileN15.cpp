#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	int a;

	cout << "Цикл While\n\n";
	cout << "Введите число: ";
	cin >> a;
	cout << endl;

	do {
		if (a == 0) {
			system("cls");
			cout << "Так как число равно нулю, программа завершается...\n\n";
			Sleep(3000);
			exit(0);
		}
		else if (a < 0 or a > 15) {
			system("cls");
			cout << "Так как число вышло за рамки дозволенного, программа завершается...\n\n";
			Sleep(3000);
			exit(0);
		}
	} while (a < 0 or a == 0 or a > 15);

	do {
		for (int i = 1; i <= a; i++) {
			cout << "Цикл отработан. Круг: " << i << endl << endl;
		};

		cout << "Введите число: ";
		cin >> a;
		cout << endl;
		
	} while (a <= 15 and a > 0);

	do{
		if (a == 0) {
			system("cls");
			cout << "Так как число равно нулю, программа завершается...\n\n";
			Sleep(3000);
			exit(0);
		}
		else if (a < 0 or a > 15) {
			system("cls");
			cout << "Так как число вышло за рамки дозволенного, программа завершается...\n\n";
			Sleep(3000);
			exit(0);
		}
	} while (a < 0 or a == 0 or a > 15);


	int _;
	cin >> _;
	return 0;
}