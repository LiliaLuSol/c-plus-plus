#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	int v;
	char r = 't';
	do {
		cout << "<ПРЕВОДЧИК>\n\n";
		cout << "[1] Русские слова\n\n[2] Английские слова\n\n[3] Выйти\n\n";
		cin >> v;

		do {
			if (v != 1 and v != 2 and v != 3) {
				cout << "\n\nВведено неккорктное значение. Пожалуйста измените его\n\n";
				cin >> v;
			};
		} while (v != 1 and v != 2 and v != 3);

		if (v == 1) {
			system("cls");
			cout << "Выберите номер слова которое хотите перевести на английский язык:\n\n";
			cout << "[1] Виноград\n\n[2] Вишня\n\n[3] Малина\n\n[4] Лимон\n\n[5] Манго\n\n";
			cout << "[6] Яблоко\n\n[7] Клубника\n\n[8] Дыня\n\n[9] Кокос\n\n[10] Ананас\n\n";
			cout << "[11] Киви\n\n[12] Персик\n\n[13] Мандарин\n\n[14] Апельсин\n\n[15] Авакадо\n\n";
			cout << "Выбор: ";
			cin >> v;
			cout << endl << endl;

			switch (v)
			{
			case 1:
				cout << "Виноград ---> Grapes\n\n";
				r = 'f';
				break;
			case 2:
				cout << "Вишня ---> Cherry\n\n";
				r = 'f';
				break;
			case 3:
				cout << "Малина ---> Raspberry\n\n";
				r = 'f';
				break;
			case 4:
				cout << "Лимон ---> Lemon\n\n";
				r = 'f';
				break;
			case 5:
				cout << "Манго ---> Mango\n\n";
				r = 'f';
				break;
			case 6:
				cout << "Яблоко ---> Apple\n\n";
				r = 'f';
				break;
			case 7:
				cout << "Клубника ---> Strawberry\n\n";
				r = 'f';
				break;
			case 8:
				cout << "Дыня ---> Melon\n\n";
				r = 'f';
				break;
			case 9:
				cout << "Кокос ---> Coconut\n\n";
				r = 'f';
				break;
			case 10:
				cout << "Ананас ---> Pinapple\n\n";
				r = 'f';
				break;
			case 11:
				cout << "Киви ---> Kiwi fruit\n\n";
				r = 'f';
				break;
			case 12:
				cout << "Персик ---> Peach\n\n";
				r = 'f';
				break;
			case 13:
				cout << "Мандарин ---> Tangerine\n\n";
				r = 'f';
				break;
			case 14:
				cout << "Апельсин ---> Orange\n\n";
				r = 'f';
				break;
			case 15:
				cout << "Авакадо ---> Avocado\n\n";
				r = 'f';
				break;
			default:
				r = 't';
				break;
			};
			
			cout << "\n\n<ВОЗВРАТ В МЕНЮ>\n\n";
			system("pause");
			system("cls");
		}
		else if (v == 2) {
			system("cls");
			cout << "Выберите номер слова которое хотите перевести на русский язык:\n\n";
			cout << "[1] Aubergine\n\n[2] Cymbling\n\n[3] Bean\n\n[4] Pepper\n\n[5] Celery\n\n";
			cout << "[6] Tomato\n\n[7] Pumpkin\n\n[8] Pea\n\n[9] Parsley\n\n[10] Dill\n\n";
			cout << "[11] Cabbage\n\n[12] Haricot\n\n[13] Potatoes\n\n[14] Turnip\n\n[15] Garlic\n\n";
			cout << "Выбор: ";
			cin >> v;
			cout << endl << endl;

			switch (v)
			{
			case 1:
				cout << "Aubergine ---> Баклажан\n\n";
				r = 'f';
				break;
			case 2:
				cout << "Cymbling ---> Патиссон\n\n";
				r = 'f';
				break;
			case 3:
				cout << "Bean ---> Бобы\n\n";
				r = 'f';
				break;
			case 4:
				cout << "Pepper ---> Перец\n\n";
				r = 'f';
				break;
			case 5:
				cout << "Celery ---> Сельдерей\n\n";
				r = 'f';
				break;
			case 6:
				cout << "Tomato ---> Помидорe\n\n";
				r = 'f';
				break;
			case 7:
				cout << "Pumpkin ---> Тыква\n\n";
				r = 'f';
				break;
			case 8:
				cout << "Pea ---> Горох\n\n";
				r = 'f';
				break;
			case 9:
				cout << "Parsley ---> Петрушка\n\n";
				r = 'f';
				break;
			case 10:
				cout << "Dill ---> Укроп\n\n";
				r = 'f';
				break;
			case 11:
				cout << "Cabbage ---> Капуста\n\n";
				r = 'f';
				break;
			case 12:
				cout << "Haricot ---> Фасоль\n\n";
				r = 'f';
				break;
			case 13:
				cout << "Potatoes ---> Картофель\n\n";
				r = 'f';
				break;
			case 14:
				cout << "Turnip ---> Репа\n\n";
				r = 'f';
				break;
			case 15:
				cout << "Garlic ---> Чеснок\n\n";
				r = 'f';
				break;
			default:
				r = 't';
				break;
			};

			cout << "\n\n<ВОЗВРАТ В МЕНЮ>\n\n";
			system("pause");
			system("cls");
		}
		else if (v == 3) {
			system("cls");
			cout << "Подтвердить выход?\n\n[1] Да     [2] Нет\n\n";
			cin >> v;
			if (v != 1 and v != 2) {
				do {
					cout << "\n\nВвели неккоректное значение.Пожалуйста, измените его\n\n";
					cin >> v;
				} while (v != 1 and v != 2);
			};
			if (v == 1) {
				system("cls");
				cout << "Выполняется выход из приложения...";
				Sleep(3000);
				exit(0);
			}
			else if (v == 2) {
				system("cls");
				break;
			};
		};
	} while (true);

	int _;
	cin >> _;
	return 0;
}