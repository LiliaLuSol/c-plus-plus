#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(0, "");

	char v,r ='t';
	int health = 3, a = 0, b = 10, x, y; 

	while (true) {
		cout << "МЕНЮ\n\nВАШЕ HP: " << health << "\nДиапазон: " << a << " - "<< b << "\n\nВыберите пункт : \n\n";
		cout << "[1] Начать игру\n\n[2] Настройка\n\n";
		cin >> v;
		do {
			if (v != '1' and v != '2') {
				cout << "Ввели неккоректное значение. Измените его\n\n";
				cin >> v;
			}
		}while (v != '1' and v != '2');
		system("cls");
		if (v == '2') {
			cout << "Выберите настройку:\n\n[1] Количество жизней\n\n[2] Диапазон\n\n";
			cin >> v;
			do {
				if (v != '1' and v != '2') {
					cout << "Ввели неккоректное значение. Измените его\n\n";
					cin >> v;
				}
			} while (v != '1' and v != '2');
			system("cls");
			if (v == '1') {
				cout << "Введите количество жизней: ";
				cin >> health;
				cout << endl << endl;
				system("pause");
				system("cls");
				
			}
			else if (v == '2') {
				cout << "Введите начало диапазона: ";
				cin >> a;
				cout << "Введите конец диапазона: ";
				cin >> b;
				cout << endl << endl;
				system("pause");
				system("cls");
				
			};
		}
		else if (v == '1') {
			system("cls");
			cout << "ВАШЕ HP : " << health << "\nДиапазон : " << a << " - " << b << "\n\n";

			x = rand();

			do {
				if (x < a or x > b) {
					x = rand();
				}
			} while (x < a or x > b);

			cout << x << endl;
			do {
				cout << "Угадай число: ";
				cin >> y;

				do {
					if (y < a or y > b) {
						cout << "Ввели неккоректное значение. Измените его\n\n";
						cin >> y;
					}
				} while (y < a or y > b);
				if (y >= a or y <= b) {
					if (y == x) {
						cout << "\nТы угадал!!!\n\n";
						r = 'f';
						system("pause");
						system("cls");
					}
					else {
						health -= 1;
						cout << "\nНе угадал... Осталось жизней: " << health << endl << endl;
						if (health == 0) {
							r = 'f';
							cout << "\nПрости, но ты проиграл...\n\n";
							system("pause");
							system("cls");
							break;
						};
					}
				};
			}while (r == 't');
		}
	};

	int _;
	cin >> _;
	return 0;
};