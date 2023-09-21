#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int GetRandomNumber(int min, int max) {
	srand(time(NULL));
	int num = min + rand() % (max - min + 1);
	return num;
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int vibor, a;
	const string Light_blue = "\x1b[36m";
	const string Purple = "\x1b[35m";
	const string White = "\x1b[37m", Gray = "\x1b[90m";
	const string Red = "\x1b[31m", Green = "\x1b[32m", Magenta = "\x1b[95m" ;
	string nameuser1 = "Игрок 1", nameuser2 = "Игрок 2", computer = "Компьютер";
	char symbol1 = 'X', symbol2 = 'O';
	string hod1, hod2, h1, h2, h3, h4, h5, h6, h7, h8, h9;
	string colour1 = "белый", colour2 = "белый", color1, color2, sign1 = White + symbol1 + White, sign2 = White + symbol2 + White;
	int win1 = 0, win2 = 0, win3 = 0, lose1 = 0, lose2 = 0, lose3 = 0, draw1 = 0, draw2 = 0, draw3 = 0;
	bool b = true;

	do{
		string generalpole[3][3] = { { "1", "2", "3"},
								{"4", "5", "6"},
								{"7", "8", "9"} };
		cout << Light_blue << "<МЕНЮ>" << "\n\n\x1b[35m[1]\x1b[0m Начать игру\n\x1b[35m[2]\x1b[0m Статистика\n";
		cout << "\x1b[35m[3]\x1b[0m Настройки\n\x1b[35m[4]\x1b[0m Выход\n\nВыберите из перечисленного: ";
		vibor = _getch();
		system("cls");
		string povtor[9] = {"0", "0", "0", "0", "0", "0", "0", "0", "0"};

		switch (vibor)
		{
		case 52:
			//exit
			system("cls");
			cout << "Производится выход...\n\n";
			Sleep(3000);
			exit(1);
			break;
		
		case 51:
			//setting
			do {
				system("cls");
				cout << Light_blue << "<НАСТРОЙКИ>\n\n" << Purple << "[1] " << White << "Настройки игрока\n" << Purple << "[2] "
					<< White << "Настройки компьютера\n" << Purple << "[3] " << White  << "Назад\n\nВыберите из перечисленного: ";
				vibor = _getch();
				system("cls");
				switch (vibor)
				{
				case 49:
					do {
						system("cls");
						cout << Light_blue << "<НАСТРОЙКИ ИГРОКА>\n\n" << Purple << "[1] " << White << "Игрок 1\n" << Purple << "[2] "
							<< White << "Игрок 2\n" << Purple << "[3] " << White << "Назад\n\nВыберите из перечисленного: ";
						vibor = _getch();
						system("cls");
						switch (vibor)
						{
						case 49:
							do {
								system("cls");
								cout << Light_blue << "<НАСТРОЙКА ИГРОКА |1|>\n\n" << Purple << "[1] " << White << "Ник\t\t :\t" << Gray << nameuser1
									<< Purple << "\n[2] " << White << "Символ\t :\t" << Gray << symbol1
									<< Purple << "\n[3] " << White << "Цвет\t :\t" << colour1
									<< Purple << "\n[4] " << White << "Назад\n\nВыберите из перечисленного: ";
								vibor = _getch();
								cout << endl << endl;
								system("cls");
								switch (vibor)
								{
								case 49:
									//name
									system("cls");
									cout << "Старое имя: " << nameuser1 << endl << endl;
									cout << "You can choose a new nameuser: ";
									cin >> nameuser1;
									cout << endl << endl;
									cout << "Имя 1го игрока изменено на: " << nameuser1;
									cout << endl << endl;
									system("pause");
									system("cls");
									break;
								case 50:
									//symbol
									system("cls");
									cout << "Старый символ: " << symbol1 << endl << endl;
									cout << "You can choose a new symbol: ";
									cin >> symbol1;
									cout << endl << endl;
									cout << "Символ 1го игрока изменено на: " << symbol1;
									cout << endl << endl;
									system("pause");
									system("cls");
									break;
								case 51:
									//colour
									system("cls");
									cout << "Только сегодня и только сейчас вы можете выбрать один из перечисленных цветов:\n\n"
										<< Light_blue << "[1] Синий\n" << Red << "[2] Красный\n" << Green << "[3] Зеленый\n" << Magenta << "[4] Маджента\n"
										<< White << "[5] белый\n\n";
									vibor = _getch();
									if (vibor == 49) {
										colour1 = "\x1b[36mсиний\x1b[0m";
										color1 = Light_blue;
										sign1 = Light_blue + symbol1 + White;
									}
									else if (vibor == 50) {
										colour1 = "\x1b[31mкрасный\x1b[0m";
										color1 = Red;
										sign1 = Red + symbol1 + White;
									}
									else if (vibor == 51) {
										colour1 = "\x1b[32mзеленый\x1b[0m";
										color1 = Green;
										sign1 = Green + symbol1 + White;
									}
									else if (vibor == 52) {
										colour1 = "\x1b[95mмаджета\x1b[0m";
										color1 = Magenta;
										sign1 = Magenta + symbol1 + White;
									}
									else if (vibor == 53) {
										colour1 = "\x1b[37mбелый\x1b[0m";
										color1 = White;
										sign1 = White + symbol1 + White;
									}
									system("cls");
									cout << "Цвет изменен на " << colour1 << endl << endl;
									system("pause");
									system("cls");
									break;
								};
								//back
								if (vibor == 52) {
									system("cls");
									break;
								};

							} while (true);
							break;
						case 50:
							do {
								system("cls");
								cout << Light_blue << "<НАСТРОЙКА ИГРОКА |2|>\n\n" << Purple << "[1] " << White << "Ник\t\t :\t" << Gray << nameuser2
									<< Purple << "\n[2] " << White << "Символ\t :\t" << Gray << symbol2
									<< Purple << "\n[3] " << White << "Цвет\t :\t" << colour2
									<< Purple << "\n[4] " << White << "Назад\n\nВыберите из перечисленного: ";
								vibor = _getch();
								cout << endl << endl;
								system("cls");
								switch (vibor)
								{
								case 49:
									//name
									system("cls");
									cout << "Старое имя: " << nameuser2 << endl << endl;
									cout << "You can choose a new nameuser: ";
									cin >> nameuser2;
									cout << endl << endl;
									cout << "Имя 1го игрока изменено на: " << nameuser2;
									cout << endl << endl;
									system("pause");
									system("cls");
									break;
								case 50:
									//symbol
									system("cls");
									cout << "Старый символ: " << symbol2 << endl << endl;
									cout << "You can choose a new symbol: ";
									cin >> symbol2;
									cout << endl << endl;
									cout << "Символ 1го игрока изменено на: " << symbol2;
									cout << endl << endl;
									system("pause");
									system("cls");
									break;
								case 51:
									//colour
									system("cls");
									cout << "Только сегодня и только сейчас вы можете выбрать один из перечисленных цветов:\n\n"
										<< Light_blue << "[1] Синий\n" << Red << "[2] Красный\n" << Green << "[3] Зеленый\n" << Magenta << "[4] Маджента\n"
										<< White << "[5] белый\n\n";
									vibor = _getch();
									if (vibor == 49) {
										colour2 = "\x1b[36mсиний\x1b[0m";
										color2 = Light_blue;
										sign2 = Light_blue + symbol2 + White;
									}
									else if (vibor == 50) {
										colour2 = "\x1b[31mкрасный\x1b[0m";
										color2 = Red;
										sign2 = Red + symbol2 + White;
									}
									else if (vibor == 51) {
										colour2 = "\x1b[32mзеленый\x1b[0m";
										color2 = Green;
										sign2 = Green + symbol2 + White;
									}
									else if (vibor == 52) {
										colour2 = "\x1b[95mмаджета\x1b[0m";
										color2 = Magenta;
										sign2 = Magenta + symbol2 + White;
									}
									else if (vibor == 53) {
										colour2 = "\x1b[37mбелый\x1b[0m";
										color2 = White;
										sign2 = White + symbol2 + White;
									}
									system("cls");
									cout << "Цвет изменен на " << colour2 << endl << endl;
									system("pause");
									system("cls");
									break;
								}
								//back
								if (vibor == 52) {
									system("cls");
									break;
								};

							} while (true);

							break;
						}
						if (vibor == 52) {
							system("cls");
							break;
						};
					} while (true);
					break;
				case 50:
					do {
						system("cls");
						cout << Light_blue << "<НАСТРОЙКА КОМПЬЮТЕРА>\n\n" << Purple << "[-] " << White << "Ник\t\t :\t" << Gray << computer
							<< Purple << "\n[1] " << White << "Символ\t :\t" << Gray << symbol2
							<< Purple << "\n[2] " << White << "Цвет\t :\t" << colour2
							<< Purple << "\n[3] " << White << "Назад\n\nВыберите из перечисленного: ";
						vibor = _getch();
						cout << endl << endl;
						system("cls");
						switch (vibor)
						{
						case 49:
							//symbol
							system("cls");
							cout << "Старый символ: " << symbol2 << endl << endl;
							cout << "You can choose a new symbol: ";
							cin >> symbol2;
							cout << endl << endl;
							cout << "Символ компьютера изменен на: " << symbol2;
							cout << endl << endl;
							system("pause");
							system("cls");
							break;
						case 50:
							//colour
							system("cls");
							cout << "Только сегодня и только сейчас вы можете выбрать один из перечисленных цветов:\n\n"
								<< Light_blue << "[1] Синий\n" << Red << "[2] Красный\n" << Green << "[3] Зеленый\n" << Magenta << "[4] Маджента\n"
								<< White << "[5] белый\n\n";
							vibor = _getch();
							if (vibor == 49) {
								colour2 = "\x1b[36mсиний\x1b[0m";
							}
							else if (vibor == 50) {
								colour2 = "\x1b[31mкрасный\x1b[0m";
							}
							else if (vibor == 51) {
								colour2 = "\x1b[32mзеленый\x1b[0m";
							}
							else if (vibor == 52) {
								colour2 = "\x1b[95mмаджета\x1b[0m";
							}
							else if (vibor == 53) {
								colour2 = "\x1b[37mбелый\x1b[0m";
							}
							system("cls");
							cout << "Цвет изменен на " << colour2 << endl << endl;
							system("pause");
							system("cls");
							break;
						}
						//back
						if (vibor == 51) {
							system("cls");
							break;
						};

					} while (true);
					break;
				};
				//back
				if (vibor == 51) {
					system("cls");
					break;
				};
				break;
			} while (true);
			break;

		case 50:
			system("cls");
			cout << Light_blue << "<СТАТИСТИКА>\n";
			cout << Green << "\t\t\x1b[4mW\x1b[0m" << Red << "\t\x1b[4mL\x1b[0m" << Gray << "\t\x1b[4mD\x1b[0m" << White << "\t|" << "\t\x1b[4mОчки\x1b[0m" << endl;
			cout << nameuser1 << "\t\t" << win1 << "\t" << lose1 << "\t" << draw1 << "\t|\t" << win1 * 5 - lose1 * 6 - draw1 * 1 << endl;
			cout << nameuser2 << "\t\t" << win2 << "\t" << lose2 << "\t" << draw2 << "\t|\t" << win2 * 5 - lose2 * 6 - draw2* 1 << endl;
			cout << computer << "\t" << win3 << "\t" << lose3 << "\t" << draw3 << "\t|\t" << win3 * 5 - lose3 * 6 - draw3 * 1 << endl << endl;
			cout << Purple << "[1] " << White << "Назад\n\n";
			vibor = _getch();
			//back
			if (vibor == 49) {
				system("cls");
				break;
			};
			break;

		case 49:
				system("cls");
				cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>\n\n" << Purple << "[1]" << White << "Одиночная игра\n" << Purple << "[2]"
					<< White << "Два игрока\n" << Purple << "[3]" << White << "Назад\n\n";
				vibor = _getch();
				switch (vibor)
				{
				case 50:
					//1
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color1 << nameuser1 << White << ": ";
					cin >> hod1;
					povtor[0] = hod1;
					/*generalpole */
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					} 

					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}
					h1 = hod1;
					//2
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White<< color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1]  << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color2 << nameuser2 << White << ": ";
					cin >> hod2;
					
					while (hod2 != "1" and hod2 != "2" and hod2 != "3" and hod2 != "4" and hod2 != "5" and hod2 != "6" and hod2 != "7" and hod2 != "8" and hod2 != "9") {
						cin >> hod2;
					};
					for (int i = 0; i < 9; i++) {
						if (hod2 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod2 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod2;
										while (hod2 != "1" and hod2 != "2" and hod2 != "3" and hod2 != "4" and hod2 != "5" and hod2 != "6" and hod2 != "7" and hod2 != "8" and hod2 != "9") {
											cin >> hod2;
										};
									}
								}
								if (hod2 != povtor[0] and hod2 != povtor[1] and hod2 != povtor[2] and hod2 != povtor[3] and hod2 != povtor[4] and hod2 != povtor[5] and hod2 != povtor[6] and hod2 != povtor[7] and hod2 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[1] = hod2;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod2 == generalpole[i][j]) {
								generalpole[i][j] = sign2;
							}
						}
					}
					h2 = hod2;
					//3
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color1 << nameuser1<< White << ": ";
					cin >> hod1;
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					}
					for (int i = 0; i < 9; i++) {
						if (hod1 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod1 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod1;
										while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
											cin >> hod1;
										}
									}
								}
								if (hod1 != povtor[0] and hod1 != povtor[1] and hod1 != povtor[2] and hod1 != povtor[3] and hod1 != povtor[4] and hod1 != povtor[5] and hod1 != povtor[6] and hod1 != povtor[7] and hod1 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[2] = hod1;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}
					h3 = hod1;
					//4
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color1 << nameuser2 << White << ": ";
					cin >> hod2;
					
					while (hod2 != "1" and hod2 != "2" and hod2 != "3" and hod2 != "4" and hod2 != "5" and hod2 != "6" and hod2 != "7" and hod2 != "8" and hod2 != "9") {
						cin >> hod2;
					};
					for (int i = 0; i < 9; i++) {
						if (hod2 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod2 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod2;
										while (hod2 != "1" and hod2 != "2" and hod2 != "3" and hod2 != "4" and hod2 != "5" and hod2 != "6" and hod2 != "7" and hod2 != "8" and hod2 != "9") {
											cin >> hod2;
										};
									}
								}
								if (hod2 != povtor[0] and hod2 != povtor[1] and hod2 != povtor[2] and hod2 != povtor[3] and hod2 != povtor[4] and hod2 != povtor[5] and hod2 != povtor[6] and hod2 != povtor[7] and hod2 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[3] = hod2;
					b = true;
					h4 = hod2;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod2 == generalpole[i][j]) {
								generalpole[i][j] = sign2;
							}
						}
					}
					//5
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color1 << nameuser1 << White << ": ";
					cin >> hod1;
					
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					}
					for (int i = 0; i < 9; i++) {
						if (hod1 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod1 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod1;
										while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
											cin >> hod1;
										}
									}
								}
								if (hod1 != povtor[0] and hod1 != povtor[1] and hod1 != povtor[2] and hod1 != povtor[3] and hod1 != povtor[4] and hod1 != povtor[5] and hod1 != povtor[6] and hod1 != povtor[7] and hod1 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[4] = hod1;
					h5 = hod1;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}

					
					//6
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl << endl;
					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color1 << nameuser1 << White << endl << endl;
						system("pause");
						win1 += 1;
						lose2 += 1;
						system("cls");
						break;
					}

					cout << "Ходит " << color2 << nameuser2 << White << ": ";
					cin >> hod2;
					
					while (hod2 != "1" and hod2 != "2" and hod2 != "3" and hod2 != "4" and hod2 != "5" and hod2 != "6" and hod2 != "7" and hod2 != "8" and hod2 != "9") {
						cin >> hod2;
					};
					for (int i = 0; i < 9; i++) {
						if (hod2 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod2 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod2;
										while (hod2 != "1" and hod2 != "2" and hod2 != "3" and hod2 != "4" and hod2 != "5" and hod2 != "6" and hod2 != "7" and hod2 != "8" and hod2 != "9") {
											cin >> hod2;
										};
									}
								}
								if (hod2 != povtor[0] and hod2 != povtor[1] and hod2 != povtor[2] and hod2 != povtor[3] and hod2 != povtor[4] and hod2 != povtor[5] and hod2 != povtor[6] and hod2 != povtor[7] and hod2 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[5] = hod2;
					h6 = hod2;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod2 == generalpole[i][j]) {
								generalpole[i][j] = sign2;
							}
						}
					}
					
					//7
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h6 << endl;
					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color2 << nameuser2 << White << endl << endl;
						system("pause");
						win2 += 1;
						lose1 += 1;
						system("cls");
						break;
					}
					cout << "Ходит " << color1 << nameuser1 << White << ": ";
					cin >> hod1;
					
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					}
					for (int i = 0; i < 9; i++) {
						if (hod1 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod1 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod1;
										while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
											cin >> hod1;
										}
									}
								}
								if (hod1 != povtor[0] and hod1 != povtor[1] and hod1 != povtor[2] and hod1 != povtor[3] and hod1 != povtor[4] and hod1 != povtor[5] and hod1 != povtor[6] and hod1 != povtor[7] and hod1 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[6] = hod1;
					h7 = hod1;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}
					
					//8
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h6 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h7 << endl;
					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color1 << nameuser1 << White << endl << endl;
						system("pause");
						win1 += 1;
						lose2 += 1;
						system("cls");
						break;
					}
					cout << "Ходит " << color2 << nameuser2 << White << ": ";
					cin >> hod2;
					
					while (hod2 != "1" and hod2 != "2" and hod2 != "3" and hod2 != "4" and hod2 != "5" and hod2 != "6" and hod2 != "7" and hod2 != "8" and hod2 != "9") {
						cin >> hod2;
					};
					for (int i = 0; i < 9; i++) {
						if (hod2 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod2 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod2;
										while (hod2 != "1" and hod2 != "2" and hod2 != "3" and hod2 != "4" and hod2 != "5" and hod2 != "6" and hod2 != "7" and hod2 != "8" and hod2 != "9") {
											cin >> hod2;
										};
									}
								}
								if (hod2 != povtor[0] and hod2 != povtor[1] and hod2 != povtor[2] and hod2 != povtor[3] and hod2 != povtor[4] and hod2 != povtor[5] and hod2 != povtor[6] and hod2 != povtor[7] and hod2 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[7] = hod2;
					h8 = hod2;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod2 == generalpole[i][j]) {
								generalpole[i][j] = sign2;
							}
						}
					}
					
					//9
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h6 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h7 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h8 << endl;
					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color2 << nameuser2 << White << endl << endl;
						system("pause");
						win2 += 1;
						lose1 += 1;
						break;
					}
					cout << "Ходит " << color1 << nameuser1 << White << ": ";
					cin >> hod1;
					
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					}
					for (int i = 0; i < 9; i++) {
						if (hod1 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod1 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod1;
										while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
											cin >> hod1;
										}
									}
								}
								if (hod1 != povtor[0] and hod1 != povtor[1] and hod1 != povtor[2] and hod1 != povtor[3] and hod1 != povtor[4] and hod1 != povtor[5] and hod1 != povtor[6] and hod1 != povtor[7] and hod1 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[8] = hod1;
					b = true;
					h9 = hod1;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}

					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h6 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h7 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << nameuser2 << White << " сходил " << h8 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h9 << endl;

					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color1 << nameuser1 << White << endl << endl;
						system("pause");
						system("cls");
						win1 += 1;
						lose2 += 1;
						break;
					}
					else {
						cout << White << "\nНичья" << endl << endl;
						system("pause");
						system("cls");
						draw1 += 1;
						draw2 += 1;
					}


					break;
					//комп
				case 49:
					//1
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color1 << nameuser1 << White << ": ";
					cin >> hod1;
					
					/*generalpole */
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					}

					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}
					povtor[0] = hod1;
					h1 = hod1;
					//2
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color2 << computer << White << ": ";
					
						a = GetRandomNumber(1, 9);
						if (a == 1) {
							hod2 = "1";
						}else if (a == 2) {
							hod2 = "2";
						}
						else if (a == 3) {
							hod2 = "3";
						}
						else if (a == 4) {
							hod2 = "4";
						}
						else if (a == 5) {
							hod2 = "5";
						}
						else if (a == 6) {
							hod2 = "6";
						}
						else if (a == 7) {
							hod2 = "7";
						}
						else if (a == 8) {
							hod2 = "8";
						}
						else if (a == 9) {
							hod2 = "9";

						}
						povtor[1] = hod2;
					for (int i = 0; i < 9; i++) {
						if (hod2 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod2 == povtor[j]) {
											a = GetRandomNumber(1, 9);
											if (a == 1) {
												hod2 = "1";
											}
											else if (a == 2) {
												hod2 = "2";
											}
											else if (a == 3) {
												hod2 = "3";
											}
											else if (a == 4) {
												hod2 = "4";
											}
											else if (a == 5) {
												hod2 = "5";
											}
											else if (a == 6) {
												hod2 = "6";
											}
											else if (a == 7) {
												hod2 = "7";
											}
											else if (a == 8) {
												hod2 = "8";
											}
											else if (a == 9) {
												hod2 = "9";
										};
									}
								}
								if (hod2 != povtor[0] and hod2 != povtor[1] and hod2 != povtor[2] and hod2 != povtor[3] and hod2 != povtor[4] and hod2 != povtor[5] and hod2 != povtor[6] and hod2 != povtor[7] and hod2 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[1] = hod2;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod2 == generalpole[i][j]) {
								generalpole[i][j] = sign2;
							}
						}
					}
					h2 = hod2;
					//3
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color1 << nameuser1 << White << ": ";
					cin >> hod1;
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					}
					for (int i = 0; i < 9; i++) {
						if (hod1 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod1 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod1;
										while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
											cin >> hod1;
										}
									}
								}
								if (hod1 != povtor[0] and hod1 != povtor[1] and hod1 != povtor[2] and hod1 != povtor[3] and hod1 != povtor[4] and hod1 != povtor[5] and hod1 != povtor[6] and hod1 != povtor[7] and hod1 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[2] = hod1;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}
					h3 = hod1;
					//4
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color1 << computer << White << ": ";
					a = GetRandomNumber(1, 9);
					if (a == 1) {
						hod2 = "1";
					}
					else if (a == 2) {
						hod2 = "2";
					}
					else if (a == 3) {
						hod2 = "3";
					}
					else if (a == 4) {
						hod2 = "4";
					}
					else if (a == 5) {
						hod2 = "5";
					}
					else if (a == 6) {
						hod2 = "6";
					}
					else if (a == 7) {
						hod2 = "7";
					}
					else if (a == 8) {
						hod2 = "8";
					}
					else if (a == 9) {
						hod2 = "9";

					}
					for (int i = 0; i < 9; i++) {
						if (hod2 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod2 == povtor[j]) {
										a = GetRandomNumber(1, 9);
										if (a == 1) {
											hod2 = "1";
										}
										else if (a == 2) {
											hod2 = "2";
										}
										else if (a == 3) {
											hod2 = "3";
										}
										else if (a == 4) {
											hod2 = "4";
										}
										else if (a == 5) {
											hod2 = "5";
										}
										else if (a == 6) {
											hod2 = "6";
										}
										else if (a == 7) {
											hod2 = "7";
										}
										else if (a == 8) {
											hod2 = "8";
										}
										else if (a == 9) {
											hod2 = "9";
										};
									}
								}
								if (hod2 != povtor[0] and hod2 != povtor[1] and hod2 != povtor[2] and hod2 != povtor[3] and hod2 != povtor[4] and hod2 != povtor[5] and hod2 != povtor[6] and hod2 != povtor[7] and hod2 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[3] = hod2;
					b = true;
					h4 = hod2;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod2 == generalpole[i][j]) {
								generalpole[i][j] = sign2;
							}
						}
					}
					//5
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << endl << endl;
					cout << "Ходит " << color1 << nameuser1 << White << ": ";
					cin >> hod1;
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					}
					for (int i = 0; i < 9; i++) {
						if (hod1 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod1 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod1;
										while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
											cin >> hod1;
										}
									}
								}
								if (hod1 != povtor[0] and hod1 != povtor[1] and hod1 != povtor[2] and hod1 != povtor[3] and hod1 != povtor[4] and hod1 != povtor[5] and hod1 != povtor[6] and hod1 != povtor[7] and hod1 != povtor[8]) {
									b = false;
								}
							}
						}
						else if (hod1 != povtor[8]) {
							break;
						}
					}
					povtor[4] = hod1;
					h5 = hod1;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}


					//6
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl << endl;
					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color1 << nameuser1 << White << endl << endl;
						system("pause");
						win1 += 1;
						lose3 += 1;
						system("cls");
						break;
					}

					cout << "Ходит " << color2 << computer << White << ": ";
					a = GetRandomNumber(1, 9);
					if (a == 1) {
						hod2 = "1";
					}
					else if (a == 2) {
						hod2 = "2";
					}
					else if (a == 3) {
						hod2 = "3";
					}
					else if (a == 4) {
						hod2 = "4";
					}
					else if (a == 5) {
						hod2 = "5";
					}
					else if (a == 6) {
						hod2 = "6";
					}
					else if (a == 7) {
						hod2 = "7";
					}
					else if (a == 8) {
						hod2 = "8";
					}
					else if (a == 9) {
						hod2 = "9";

					}
					for (int i = 0; i < 9; i++) {
						if (hod2 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod2 == povtor[j]) {
										a = GetRandomNumber(1, 9);
										if (a == 1) {
											hod2 = "1";
										}
										else if (a == 2) {
											hod2 = "2";
										}
										else if (a == 3) {
											hod2 = "3";
										}
										else if (a == 4) {
											hod2 = "4";
										}
										else if (a == 5) {
											hod2 = "5";
										}
										else if (a == 6) {
											hod2 = "6";
										}
										else if (a == 7) {
											hod2 = "7";
										}
										else if (a == 8) {
											hod2 = "8";
										}
										else if (a == 9) {
											hod2 = "9";
										};
									}
								}
								if (hod2 != povtor[0] and hod2 != povtor[1] and hod2 != povtor[2] and hod2 != povtor[3] and hod2 != povtor[4] and hod2 != povtor[5] and hod2 != povtor[6] and hod2 != povtor[7] and hod2 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[5] = hod2;
					h6 = hod2;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod2 == generalpole[i][j]) {
								generalpole[i][j] = sign2;
							}
						}
					}

					//7
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h6 << endl;
					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color2 << computer << White << endl << endl;
						system("pause");
						win3 += 1;
						lose1 += 1;
						system("cls");
						break;
					}
					cout << "Ходит " << color1 << nameuser1 << White << ": ";
					cin >> hod1;
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					}
					for (int i = 0; i < 9; i++) {
						if (hod1 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod1 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod1;
										while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
											cin >> hod1;
										}
									}
								}
								if (hod1 != povtor[0] and hod1 != povtor[1] and hod1 != povtor[2] and hod1 != povtor[3] and hod1 != povtor[4] and hod1 != povtor[5] and hod1 != povtor[6] and hod1 != povtor[7] and hod1 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[6] = hod1;
					h7 = hod1;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}

					//8
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h6 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h7 << endl;
					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color1 << nameuser1 << White << endl << endl;
						system("pause");
						win1 += 1;
						lose3 += 1;
						system("cls");
						break;
					}
					cout << "Ходит " << color2 << computer << White << ": ";
					a = GetRandomNumber(1, 9);
					if (a == 1) {
						hod2 = "1";
					}
					else if (a == 2) {
						hod2 = "2";
					}
					else if (a == 3) {
						hod2 = "3";
					}
					else if (a == 4) {
						hod2 = "4";
					}
					else if (a == 5) {
						hod2 = "5";
					}
					else if (a == 6) {
						hod2 = "6";
					}
					else if (a == 7) {
						hod2 = "7";
					}
					else if (a == 8) {
						hod2 = "8";
					}
					else if (a == 9) {
						hod2 = "9";

					}
					for (int i = 0; i < 9; i++) {
						if (hod2 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod2 == povtor[j]) {
										a = GetRandomNumber(1, 9);
										if (a == 1) {
											hod2 = "1";
										}
										else if (a == 2) {
											hod2 = "2";
										}
										else if (a == 3) {
											hod2 = "3";
										}
										else if (a == 4) {
											hod2 = "4";
										}
										else if (a == 5) {
											hod2 = "5";
										}
										else if (a == 6) {
											hod2 = "6";
										}
										else if (a == 7) {
											hod2 = "7";
										}
										else if (a == 8) {
											hod2 = "8";
										}
										else if (a == 9) {
											hod2 = "9";
										};
									}
								}
								if (hod2 != povtor[0] and hod2 != povtor[1] and hod2 != povtor[2] and hod2 != povtor[3] and hod2 != povtor[4] and hod2 != povtor[5] and hod2 != povtor[6] and hod2 != povtor[7] and hod2 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[7] = hod2;
					h8 = hod2;
					b = true;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod2 == generalpole[i][j]) {
								generalpole[i][j] = sign2;
							}
						}
					}

					//9
					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h6 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h7 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h8 << endl;
					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color2 << computer << White << endl << endl;
						system("pause");
						win3 += 1;
						lose1 += 1;
						break;
					}
					cout << "Ходит " << color1 << nameuser1 << White << ": ";
					cin >> hod1;
					while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
						cin >> hod1;
					}
					for (int i = 0; i < 9; i++) {
						if (hod1 == povtor[i]) {
							while (b == true) {
								for (int j = 0; j < 9; j++) {
									if (hod1 == povtor[j]) {
										cout << "\nЗанято\n\n";
										cin >> hod1;
										while (hod1 != "1" and hod1 != "2" and hod1 != "3" and hod1 != "4" and hod1 != "5" and hod1 != "6" and hod1 != "7" and hod1 != "8" and hod1 != "9") {
											cin >> hod1;
										}
			
									}
								}
								if (hod1 != povtor[0] and hod1 != povtor[1] and hod1 != povtor[2] and hod1 != povtor[3] and hod1 != povtor[4] and hod1 != povtor[5] and hod1 != povtor[6] and hod1 != povtor[7] and hod1 != povtor[8]) {
									b = false;
								}
							}
						}
					}
					povtor[8] = hod2;
					b = true;
					h9 = hod1;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (hod1 == generalpole[i][j]) {
								generalpole[i][j] = sign1;
							}
						}
					}

					system("cls");
					cout << Light_blue << "<КРЕСТИКИ НОЛИКИ>" << White << "\t\t" << Purple << "+ " << White << "Информация" << endl << endl;
					cout << "   " << generalpole[0][0] << " | " << generalpole[0][1] << " | " << generalpole[0][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h1 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h2 << endl;
					cout << "   " << generalpole[1][0] << " | " << generalpole[1][1] << " | " << generalpole[1][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h3 << endl;
					cout << "   " << "- - - - -" << "\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h4 << endl;
					cout << "   " << generalpole[2][0] << " | " << generalpole[2][1] << " | " << generalpole[2][2] << "\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h5 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h6 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h7 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color2 << computer << White << " сходил " << h8 << endl;
					cout << "\t\t\t\t" << Purple << "+ " << White << color1 << nameuser1 << White << " сходил " << h9 << endl;

					if ((generalpole[0][0] == generalpole[0][1] and generalpole[0][0] == generalpole[0][2]) or (generalpole[1][0] == generalpole[1][1] and generalpole[1][0] == generalpole[1][2]) or (generalpole[2][0] == generalpole[2][1] and generalpole[2][0] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][0] and generalpole[0][0] == generalpole[2][0]) or (generalpole[0][1] == generalpole[1][1] and generalpole[0][1] == generalpole[2][1]) or (generalpole[0][2] == generalpole[1][2] and generalpole[0][2] == generalpole[2][2])
						or (generalpole[0][0] == generalpole[1][1] and generalpole[0][0] == generalpole[2][2]) or (generalpole[0][2] == generalpole[1][1] and generalpole[0][2] == generalpole[2][0])) {
						cout << White << "\nПобедил " << color1 << nameuser1 << White << endl << endl;
						system("pause");
						system("cls");
						win1 += 1;
						lose3 += 1;
						break;
					}
					else {
						cout << White << "\nНичья" << endl << endl;
						system("pause");
						system("cls");
						draw1 += 1;
						draw3 += 1;
					}
					break;
				
				}
				
				//back
				if (vibor == 51) {
					system("cls");
					break;
				};
			
			break;
		};
	} while (true);

	int _;
	cin >> _ ;
	return 0;
}