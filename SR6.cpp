#include <iostream> 
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
		
	char v, y, v2, v3, v4, k;
	char q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12;
	string nameuser = "user";
	int kolq = 8;
	int health = 3, score = 0;

		//menu +
		cout << "Здравстуй, игрок!\n\n";
		do {
			cout << "\n<МЕНЮ>\n\nТВОЙ СЧЕТ: " << score << endl << endl;;
		cout << "СДЕЛАЙ СВОЙ ВЫБОР\nВведи букву нужного варианта\n\n";
		cout << "[1] Начать игру\n\n[2] Настройки\n\n[3] Правила\n\n[4] Выйти\n\n";

		string quest1 = "Какая английская буква изображена на клавише с русской буквой Л?\n\n[a] F     [c] K\n[b] G     [d] L\n\n";
		string quest2 = "Сколько байт занимает char?\n\n[a] 1     [c] 4\n[b] 3     [d] 11\n\n";
		string quest3 = "Что из перечисленного является языком программирования?\n\n[a] Placthon   [c] Rubin\n[b] Abubin     [d] Ruby\n\n";
		string quest4 = "Операция сложения как выглядит?\n\n[a] *     [c] -\n[b] +     [d] %\n\n";
		string quest5 = "Можно ли C++ писать [a += 3]?\n\n[a] Да     [c] Только в питоне\n[b] Нет    [d] В C++ нельзя\n\n";
		string quest6 = "Что значит сокращение 'ОС'?\n\n[a] Основные средства   [c] Операционная система\n[b] Операционная сила   [d] Омлет системы\n\n";
		string quest7 = "Из каких цифр состоит двоичный код?\n\n[a] 1 2     [c] 1 10\n[b] 0 1     [d] 01 02\n\n";
		string quest8 = "На каком языке написан код от этой викторины?\n\n[a] C#         [c] Python\n[b] PascalABC   [d] Такого варианта нет среди ответов\n\n";
		string quest9 = "Какую первую программу обычно пишут программисты?\n\n[a] Сортировка пузырьком   [c] Калькулятор\n[b] Hello World            [d] Типы данных\n\n";
		string quest10 = "При исправлении одной ошибки в коде сколько ошибок будет обнаружено после?\n\n[a] 0     [c] 1\n[b] 2     [d] Неизвестно\n\n";
		string quest11 = "Какой порядок нумерации индекса?\n\n[a] 0 1 2...     [c] 1 2 3...\n[b] Ее нет       [d] Программист сам выбирает как будет\n\n";
		string quest12 = "Что такое string?\n\n[a] Палка     [c] Строка\n[b] Трусы     [d] Непереводимое слово\n\n";
		cin >> v;

		if (v != '1' and v != '2' and v != '3' and v != '4') {
			do {
				cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n\n";
				cin >> v;
			} while (v != '1' and v != '2' and v != '3' and v != '4');
		};

		system("cls");
		while (true) {
			//exit +++
			if (v == '4') {
				cout << "\nПодтвердить выход?\n\n[1] Да     [2] Нет\n\n";
				cin >> y;
				if (y != '1' and y != '2') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n\n";
						cin >> y;
					} while (y != '1' and y != '2');
				};
				if (y == '1') {
					system("cls");
					cout << "\nВсего наилучшего\n\nВыход из приложения...";
					Sleep(3000);
					exit(0);
				}
				else if (y == '2') {
					system("cls");
					break;
				};
			}
			//rules +
			else if (v == '3') {
				cout << "\n<ПРАВИЛА>\n\n-Игрок получает очки за правильный ответ на вопрос;\n-Игрок проходит дальше за правильный ответ;\n-Игрок теряет жизнь при неправильном ответе.\n";
				cout << "\n<ВОЗВРАТ В МЕНЮ>\n\n";
				system("pause");
				system("cls");

				break;
			}
			//setting +
			else if (v == '2') {
				cout << "\n<НАСТРОЙКИ>\n\n[1] Редактирование имя игрока;\n\n[2] Редактирование количества вопросов в игре;\n\n[3] Редактирование цвет интерфейса.\n\n[4] Возврат в меню\n\n";
				cin >> v2;
				if (v2 == '1') {
					system("cls");
					cout << "\nВведите имя игрока: ";
					cin >> nameuser;
					cout << "\n\nПодтвердить имя?\n\n[1] Да     [2] Нет\n\n";
					cin >> y;
					if (y != '1' and y != '2') {
						do {
							cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n\n";
							cin >> y;
						} while (y != '1' and y != '2');
					};
					if (y == '1') {
						system("cls");
						cout << "\nИмя игрока подтверждено. Теперь имя игрока: " << nameuser << endl << endl;
						system("pause");
						system("cls");
					}
					else if (y == '2') {
						system("cls");
					};
					continue;
				};
				if (v2 == '2') {
					system("cls");
					cout << "\nМожно Изменить количество вопросов на:\n\n[1] 8\n\n[2] 10\n\n[3] 12\n\n";
					cin >> k;
					if (k != '1' and k != '2' and k != '3') {
						do {
							cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n\n";
							cin >> k;
						} while (k != '1' and k != '2' and k != '3');
					};
					if (k == '1') {
						kolq = 8;
						cout << "\nКоличество вопросов изменено на " << kolq << endl << endl << "<ВОЗВРАТ В НАСТРОЙКИ>\n";
						system("pause");
						system("cls");
					}
					else if (k == '2') {
						kolq = 10;
						cout << "\nКоличество вопросов изменено на " << kolq << endl << endl << "<ВОЗВРАТ В НАСТРОЙКИ>\n";;
						system("pause");
						system("cls");
					}
					else if (k == '3') {
						kolq = 12;
						cout << "\nКоличество вопросов изменено на " << kolq << endl << endl << "<ВОЗВРАТ В НАСТРОЙКИ>\n";;
						system("pause");
						system("cls");
					};
					continue;
				};
				if (v2 == '3') {
					system("cls");
					cout << "\nВыберите цвет фона:\n\n";
					cout << "[1] Kрасный\n\n[2] Зеленый\n\n[3] Синий\n\n[4] Белый\n\n[5] Черный\n\n";
					cin >> v4;
					if (v4 != '1' and v4 != '2' and v4 != '3' and v4 != '4' and v4 != '5') {
						do {
							cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n\n";
							cin >> v4;
						} while (v4 != '1' and v4 != '2' and v4 != '3' and v4 != '4' and v4 != '5');
					};
					cout << "\n\nВыберите цвет текста:\n\n";
					cout << "[1] Kрасный\n\n[2] Зеленый\n\n[3] Синий\n\n[4] Белый\n\n[5] Черный\n\n";
					cin >> v3;
					cout << endl;
					if (v3 != '1' and v3 != '2' and v3 != '3' and v3 != '4' and v3 != '5') {
						do {
							cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n\n";
							cin >> v3;
						} while (v3 != '1' and v3 != '2' and v3 != '3' and v3 != '4' and v3 != '5');
					};
					if (v4 == '1') {
						if (v3 == '1') {
							system("color 44");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '2') {
							system("color 42");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '3') {
							system("color 41");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '4') {
							system("color 47");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '5') {
							system("color 40");
							cout << "Изменения в силе\n\n";
						};
					}
					else if (v4 == '2') {
						if (v3 == '1') {
							system("color 24");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '2') {
							system("color 22");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '3') {
							system("color 21");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '4') {
							system("color 27");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '5') {
							system("color 20");
							cout << "Изменения в силе\n\n";
						};
					}
					else if (v4 == '3') {
						if (v3 == '1') {
							system("color 14");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '2') {
							system("color 12");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '3') {
							system("color 11");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '4') {
							system("color 17");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '5') {
							system("color 10");
							cout << "Изменения в силе\n\n";
						};
					}
					else if (v4 == '4') {
						if (v3 == '1') {
							system("color 74");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '2') {
							system("color 72");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '3') {
							system("color 71");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '4') {
							system("color 77");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '5') {
							system("color 70");
							cout << "Изменения в силе\n\n";
						};
					}
					else if (v4 == '5') {
						if (v3 == '1') {
							system("color 04");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '2') {
							system("color 02");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '3') {
							system("color 01");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '4') {
							system("color 07");
							cout << "Изменения в силе\n\n";
						}
						else if (v3 == '5') {
							system("color 00");
							cout << "Изменения в силе\n\n";
						};
					};
					cout << "<ВОЗВРАТ В НАСТРОЙКИ>\n\n";
					system("pause");
					system("cls");
					continue;
				};
				if (v2 == '4') {
					cout << "\n<ВОЗВРАТ В МЕНЮ>\n\n";
					system("pause");
					system("cls");
					break;
				};
			}
			//start gA,E
			else if (v == '1') {
			health = 3;
				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				
				cout << "\n[1] " << quest1 << endl;
				cin >> q1;

				if (q1 != 'a' and q1 != 'b' and q1 != 'd' and q1 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q1;
					} while ((q1 != 'a' and q1 != 'b' and q1 != 'd' and q1 != 'c'));
				};
				if (q1 == 'c') {
					cout << "\nВерно, далее \n\n";
					score += 50;
				}
				else if (q1 == 'a' or q1 == 'b' or q1 == 'd') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: с\n\n";
					health -= 1;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[2] " << quest2 << endl;
				cin >> q2;

				if (q2 != 'a' and q2 != 'b' and q2 != 'd' and q2 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q2;
					} while ((q2 != 'a' and q2 != 'b' and q2 != 'd' and q2 != 'c'));
				};
				if (q2 == 'a') {
					cout << "\nВерно, далее \n\n";
					score += 50;
				}
				else if (q2 == 'c' or q2 == 'b' or q2 == 'd') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: a\n\n";
					health -= 1;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[3] " << quest3 << endl;
				cin >> q3;

				if (q3 != 'a' and q3 != 'b' and q3 != 'd' and q3 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q3;
					} while ((q3 != 'a' and q3 != 'b' and q3 != 'd' and q3 != 'c'));
				};
				if (q3 == 'd') {
					cout << "\nВерно, далее \n\n";
					score += 50;
				}
				else if (q3 == 'c' or q3 == 'b' or q3 == 'a') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[4] " << quest4 << endl;
				cin >> q4;

				if (q4 != 'a' and q4 != 'b' and q4 != 'd' and q4 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q4;
					} while ((q4 != 'a' and q4 != 'b' and q4 != 'd' and q4 != 'c'));
				};
				if (q4 == 'b') {
					cout << "\nВерно, далее \n\n";
					score += 50;
				}
				else if (q4 == 'c' or q4 == 'd' or q4 == 'a') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[5] " << quest5 << endl;
				cin >> q5;

				if (q5 != 'a' and q5 != 'b' and q5 != 'd' and q5 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q5;
					} while ((q5 != 'a' and q5 != 'b' and q5 != 'd' and q5 != 'c'));
				};
				if (q5 == 'a') {
					cout << "\nВерно, далее \n\n";
					score += 50;
				}
				else if (q5 == 'c' or q5 == 'b' or q5 == 'd') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[6] " << quest6 << endl;
				cin >> q6;

				if (q6 != 'a' and q6 != 'b' and q6 != 'd' and q6 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q6;
					} while ((q6 != 'a' and q6 != 'b' and q6 != 'd' and q6 != 'c'));
				};
				if (q6 == 'c') {
					cout << "\nВерно, далее \n\n";
					score += 50;
				}
				else if (q6 == 'd' or q6 == 'b' or q6 == 'a') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[7] " << quest7 << endl;
				cin >> q7;

				if (q7 != 'a' and q7 != 'b' and q7 != 'd' and q7 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q7;
					} while ((q7 != 'a' and q7 != 'b' and q7 != 'd' and q7 != 'c'));
				};
				if (q7 == 'b') {
					cout << "\nВерно, далее \n\n";
					score += 50;
				}
				else if (q7 == 'c' or q7 == 'd' or q7 == 'a') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[8] " << quest8 << endl;
				cin >> q8;

				if (q8 != 'a' and q8 != 'b' and q8 != 'd' and q8 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q8;
					} while ((q8 != 'a' and q8 != 'b' and q8 != 'd' and q8 != 'c'));
				};
				if (q8 == 'd') {
					if (kolq != 8) {
						cout << "\nВерно, далее \n\n";
					}
					score += 50;
					cout << "\nТвои очки: " << score << endl;
				}
				else if (q8 == 'c' or q8 == 'b' or q8 == 'a') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};
				if (kolq == 8) {
					cout << "Поздравляю, ю вин! Ты крут, спасиб за игру\n\nТВОЙ СЧЕТ : " << score << endl << endl;
					system("pause");
					system("cls");
					break;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[9] " << quest9 << endl;
				cin >> q9;

				if (q9 != 'a' and q9 != 'b' and q9 != 'd' and q9 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q9;
					} while ((q9 != 'a' and q9 != 'b' and q9 != 'd' and q9 != 'c'));
				};
				if (q9 == 'b') {
					cout << "\nВерно, далее \n\n";
					score += 50;
				}
				else if (q9 == 'c' or q9 == 'd' or q9 == 'a') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[10] " << quest10 << endl;
				cin >> q10;

				if (q10 != 'a' and q10 != 'b' and q10 != 'd' and q10 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q10;
					} while ((q10 != 'a' and q10 != 'b' and q10 != 'd' and q10 != 'c'));
				};
				if (q10 == 'd') {
					if (kolq != 10) {
						cout << "\nВерно, далее \n\n";
					}
					score += 50;
					cout << "\nТвои очки: " << score << endl;
				}
				else if (q10 == 'c' or q10 == 'b' or q10 == 'a') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};
				if (kolq == 10) {
					cout << "Поздравляю, ю вин! Ты крут, спасиб за игру\n\nТВОЙ СЧЕТ: " << score << endl << endl;
					system("pause");
					system("cls");
					break;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[11] " << quest11 << endl;
				cin >> q11;

				if (q11 != 'a' and q11 != 'b' and q11 != 'd' and q11 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q11;
					} while ((q11 != 'a' and q11 != 'b' and q11 != 'd' and q11 != 'c'));
				};
				if (q11 == 'a') {
					cout << "\nВерно, далее \n\n";
					score += 50;
				}
				else if (q11 == 'c' or q11 == 'd' or q11 == 'b') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};

				system("pause");
				system("cls");

				cout << "\nИгрок: " << nameuser << " | Жизни: " << health << " | Очки: " << score;
				cout << "\n[12] " << quest12 << endl;
				cin >> q12;

				if (q12 != 'a' and q12 != 'b' and q12 != 'd' and q12 != 'c') {
					do {
						cout << "\nВвели неккоректное значение.Пожалуйста, измените его\n";
						cin >> q12;
					} while ((q12 != 'a' and q12 != 'b' and q12 != 'd' and q12 != 'c'));
				};
				if (q12 == 'd') {
					score += 50;
					cout << "\nТвои очки: " << score << endl;
				}
				else if (q12 == 'c' or q12 == 'b' or q12 == 'a') {
					cout << "\nНеверно, получай - 1 Жизнь \n\nПравильный ответ: d\n\n";
					health -= 1;
				};

				if (health == 0) {
					cout << "Поздравляю, начинай заново";
					system("pause");
					system("cls");
					break;
				};
				if (kolq == 12) {
					cout << "Поздравляю, ю вин! Ты крут, спасиб за игру\n\nТВОЙ СЧЕТ: " << score << endl << endl;
					system("pause");
					system("cls");
					break;
				};
			};
			break;
		};
	}while(1);

	int _;
	cin >> _;

	return 0;
}