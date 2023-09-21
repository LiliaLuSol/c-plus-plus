//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(0, "");
//	char f, t, p = ' ';
//	int d, p1 = 1, i = 1, j, v, m;
//
//	while (true) {
//
//		cout << "<ГЕОМЕТРИЧЕСКИЕ ФИГУРЫ>\n\n";
//		cout << "Выберите фигуру:\n\n[1] Линия\n[2] Квадрат\n[3] Прямоугольник\n[4] Треугольник\n[5] Ромб\n"
//			<< "[6] Решетка\n[7] Крестик\n[8] Плюсик\n\n";
//		cin >> f;
//
//		while (f != '1' and f != '2' and f != '3' and f != '4' and f != '5' and f != '6' and f != '7' and f != '8') {
//			cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
//			cin >> f;
//		}
//		if (f == '1') {
//			system("cls");
//			cout << "<ЛИНИЯ>\n\nВыберите тип фигуры:\n\n[1] Горизонтальная\n[2] Вертикальная\n\n";
//			cin >> f;
//
//			while (f != '1' and f != '2') {
//				cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
//				cin >> f;
//			}
//
//			cout << "\nУкажите длину: ";
//			cin >> d;
//			cout << "\n\nУкажите текстуру: ";
//			cin >> t;
//			cout << endl << endl;
//
//			if (f == '1') {
//				system("cls");
//				cout << "Результат:\n\n";
//				i = 1;
//				while (i <= d) {
//					cout << t;
//					i++;
//				};
//				cout << endl << endl;
//				system("pause");
//				system("cls");
//			}
//			else if (f == '2') {
//				system("cls");
//				i = 1;
//				cout << "Результат:\n\n";
//				while (i <= d) {
//					cout << t << endl;
//					i++;
//				};
//				cout << endl << endl;
//				system("pause");
//				system("cls");
//			};
//		}
//		else if (f == '2') {
//			system("cls");
//			cout << "<КВАДРАТ>\n\nВыберите тип фигуры:\n\n[1] Пустой\n[2] Заполненный\n\n";
//			cin >> f;
//
//			while (f != '1' and f != '2') {
//				cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
//				cin >> f;
//			}
//
//			cout << "\nУкажите длину: ";
//			cin >> d;
//			cout << "\n\nУкажите текстуру: ";
//			cin >> t;
//			cout << endl << endl;
//
//			if (f == '1') {
//				system("cls");
//				cout << "Результат:\n\n";
//				i = 1;
//				while (i <= d) {
//					cout << t << p;
//					i++;
//				};
//				cout << endl;
//				if (d != 1) {
//					m = 2 * i - 1;
//					i = 1;
//					p1 = 1;
//					while (i <= d - 2) {
//						cout << t;
//						while (p1 <= m - 4) {
//							cout << p;
//							p1++;
//
//						};
//						p1 = 1;
//						cout << t << endl;
//						i++;
//					};
//					i = 1;
//
//					while (i <= d) {
//						cout << t << p;
//						i++;
//					};
//				};
//				cout << endl << endl;
//				system("pause");
//				system("cls");
//			}
//			else if (f == '2') {
//				system("cls");
//				cout << "Результат:\n\n";
//				i = 1;
//				while (i <= d) {
//					cout << t << p;
//					i++;
//				};
//				cout << endl;
//				if (d != 1) {
//					m = 2 * i - 1;
//					i = 1;
//					p1 = 1;
//					while (i <= d - 2) {
//						while (p1 <= d - 1) {
//							cout << t << p;
//							p1++;
//
//						};
//						p1 = 1;
//						cout << t << endl;
//						i++;
//					};
//					i = 1;
//
//					while (i <= d) {
//						cout << t << p;
//						i++;
//					};
//				};
//				cout << endl << endl;
//				system("pause");
//				system("cls");
//
//			};
//		}
//		else if (f == '3') {
//			system("cls");
//			cout << "<ПРЯМОУГоЛЬНИК>\n\nВыберите тип фигуры:\n\n[1] Пустой\n[2] Заполненный\n\n";
//			cin >> f;
//
//			while (f != '1' and f != '2') {
//				cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
//				cin >> f;
//			}
//
//			cout << "\nУкажите ширину: ";
//			cin >> d;
//			cout << "\n\nУкажите высоту: ";
//			cin >> v;
//			cout << "\n\nУкажите текстуру: ";
//			cin >> t;
//			cout << endl << endl;
//
//			if (f == '1') {
//				system("cls");
//				cout << "Результат:\n\n";
//				if ( v == 0 or d == 0) {
//					cout << "???\n" << endl;
//					system("pause");
//					system("cls");
//				}
//				else if (d == 1 and v == 1) {
//					cout << "t\n" << endl;
//					system("pause");
//					system("cls");
//				}
//				else if (d == 1 or v == 1) {
//					if (v == 1) {
//						system("cls");
//						i = 1;
//						while (i <= d) {
//							cout << t;
//							i++;
//						};
//						cout << endl << endl;
//						system("pause");
//						system("cls");
//					}
//					else if (d == 1) {
//						system("cls");
//						i = 1;
//						while (i <= v) {
//							cout << t << endl;
//							i++;
//						};
//						cout << endl << endl;
//						system("pause");
//						system("cls");
//					};
//				}
//				else {
//					i = 1;
//					while (i <= d) {
//						cout << t << p;
//						i++;
//					};
//					cout << endl;
//					m = 2 * i - 1;
//					i = 1;
//					p1 = 1;
//					while (i <= v - 2) {
//						cout << t;
//						while (p1 <= m - 4) {
//							cout << p;
//							p1++;
//
//						};
//						p1 = 1;
//						cout << t << endl;
//						i++;
//					};
//					i = 1;
//					while (i <= d) {
//						cout << t << p;
//						i++;
//					};
//				};
//				cout << endl << endl;
//				system("pause");
//				system("cls");
//			}
//			else if (f == '2') {
//				system("cls");
//				cout << "Результат:\n\n";
//				if (v == 0 or d == 0) {
//					cout << "???\n" << endl;
//					system("pause");
//					system("cls");
//				}
//				else if (d == 1 and v == 1) {
//					cout << "t\n" << endl;
//					system("pause");
//					system("cls");
//				}
//				else if (d == 1 or v == 1) {
//					if (v == 1) {
//						system("cls");
//						cout << "Результат:\n\n";
//						i = 1;
//						while (i <= d) {
//							cout << t;
//							i++;
//						};
//						cout << endl << endl;
//						system("pause");
//						system("cls");
//					}
//					else if (d == 1) {
//						system("cls");
//						i = 1;
//						cout << "Результат:\n\n";
//						while (i <= v) {
//							cout << t << endl;
//							i++;
//						};
//						cout << endl << endl;
//						system("pause");
//						system("cls");
//					};
//				}
//				else {
//					i = 1;
//					while (i <= d) {
//						cout << t << p;
//						i++;
//					};
//					cout << endl;
//					i = 1;
//					p1 = 1;
//					if (v > d) {
//						m = v - d;
//						while (i <= v - 2) {
//							while (p1 <= v - m - 1) {
//								cout << t << p;
//								p1++;
//							};
//							p1 = 1;
//							cout << t << p << endl;
//							i++;
//						};
//					}
//					else if (v < d) {
//						m = d - v;
//						while (i <= v - 2) {
//							while (p1 <= v + m - 1) {
//								cout << t << p;
//								p1++;
//							};
//							p1 = 1;
//							cout << t << p << endl;
//							i++;
//						};
//					}
//					i = 1;
//					while (i <= d) {
//						cout << t << p;
//						i++;
//					};
//				};
//				cout << endl << endl;
//				system("pause");
//				system("cls");
//
//			};
//		}
//		else if (f == '4') {
//			system("cls");
//			cout << "<ТРЕУГОЛЬНИК>\n\nВыберите тип фигуры:\n\n[1] Пустой\n[2] Заполненный\n\n";
//			cin >> f;
//
//			while (f != '1' and f != '2') {
//				cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
//				cin >> f;
//			}
//
//			cout << "\nУкажите высоту: ";
//			cin >> d;
//			cout << "\n\nУкажите текстуру: ";
//			cin >> t;
//			cout << endl << endl;
//
//			if (f == '1') {
//				system("cls");
//				cout << "Результат:\n\n";
//
//				for (i = 0; i < d; i++) {
//					for (j = 1; j < d - i; j++) {
//						cout << p << p;
//					};
//					for (j = d - 2 * i; j <= d; j++) {
//						if (i == 0 or i == d - 1) {
//							cout << t << p;
//						}
//						else if (i > 0 and i < d - 1) {
//							if (j == d or j == d - i * 2) {
//								cout << t << p;
//							}
//							else {
//								cout << p << p;
//							};
//						};
//
//					};
//					cout << endl;
//				};
//				cout << endl << endl;
//				system("pause");
//				system("cls");
//			}
//			else if (f == '2') {
//				system("cls");
//				cout << "Результат:\n\n";
//				for (int i = 0; i < d; i++) {
//					for (int j = 1; j < d - i; j++) {
//						cout << p << p;
//					};
//					for (int j = d - 2 * i; j <= d; j++) {
//						cout << t << p;
//					};
//					cout << endl;
//				};
//				cout << endl << endl;
//				system("pause");
//				system("cls");
//			};
//		}
//		else if (f == '5') {
//			system("cls");
//			cout << "<РОМБ>\n\nВыберите тип фигуры:\n\n[1] Пустой\n[2] Заполненный\n\n";
//			cin >> f;
//
//			while (f != '1' and f != '2') {
//				cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
//				cin >> f;
//			}
//			;
//			cout << "\nУкажите размер: ";
//			cin >> d;
//			cout << "\n\nУкажите текстуру: ";
//			cin >> t;
//			cout << endl << endl;
//
//			p1 = d / 2;
//
//			system("cls");
//			cout << "Результат:\n\n";
//			if (f == '1') {
//				if (d == 1) {
//					cout << t;
//					system("pause");
//					system("cls");
//				}
//				else if (d == 2) {
//					cout << t << endl << t;
//					system("pause");
//					system("cls");
//				}
//				else {
//					if (d % 2 == 1) {
//						system("cls");
//						for (int i = 0; i < d; i++) {
//							for (int j = 0; j < d; j++) {
//								if (i + d / 2 == j || i - d / 2 == j || i == d / 2 - j || i == d / 2 + d - j - 1)
//								{
//									cout << t << p;
//								}
//								else
//								{
//									cout << p << p;
//								}
//							}
//							cout << "\n";
//
//						}
//					}
//					else {
//						cout << "Это уже будет не ромб)))";
//					}
//					cout << endl << endl;
//					system("pause");
//					system("cls");
//				};
//			}
//			else if (f == '2') {
//				if (d == 1) {
//					cout << t;
//					system("pause");
//					system("cls");
//				}
//				else if (d == 2) {
//					cout << t << endl << t;
//					system("pause");
//					system("cls");
//				}
//				else {
//					if (d % 2 == 1) {
//						for (i = 0; i < d; i++) {
//							for (j = 0; j < d; j++) {
//								if (i <= p1) {
//
//									if (j >= p1 - i and j <= p1 + i) {
//										cout << t;
//									}
//									else {
//										cout << p;
//									};
//								}
//								else
//								{
//									if (j >= p1 + i - d + 1 and j <= p1 - i + d - 1) {
//										cout << t;
//									}
//									else {
//										cout << p;
//									};
//								};
//							};
//							cout << endl;
//						};
//					}
//					else {
//						cout << "Это уже будет не ромб)))";
//					}
//					cout << endl << endl;
//					system("pause");
//					system("cls");
//				};
//			};
//		}
//		else if (f == '6') {
//		system("cls");
//		cout << "<РЕШЕТКА>\n";
//		cout << "\nУкажите длину: ";
//		cin >> d;
//		cout << "\n\nУкажите текстуру: ";
//		cin >> t;
//		cout << endl << endl;
//
//	
//		system("cls");
//		cout << "Результат:\n\n";
//		if (d == 1) {
//			cout << t << endl << endl;
//		}
//		else if (d == 2) {
//			cout << t << p << t << endl;
//			cout << t << p << t << endl;
//		}
//		else if (d % 2 == 1) {
//			for (i = 0; i != d / 2; i++) {
//				cout << p << p << t;
//				if (d > 3) {
//					for (j = 0; j != d / 2 - 1; j++) {
//						cout << p << p << p << t;
//					}
//				}
//				cout << endl;
//				for (int k = 0; k != d; k++) {
//					cout  << t << p;
//				}
//				cout << endl;
//			}
//			cout << p << p << t;
//			if (d > 3) {
//				for (j = 0; j != d / 2 - 1; j++) {
//					cout << p << p << p << t;
//				}
//			}
//		}
//		else if (d % 2 == 0) {
//			for (i = 0; i != d / 2; i++) {
//				cout << p << p << t;
//				if (d > 3) {
//					for (j = 0; j != d / 2 - 1; j++) {
//						cout << p << p << p << t;
//					}
//				}
//				cout << endl;
//				for (int k = 0; k != d; k++) {
//					cout << t << p;
//				}
//				cout << endl;
//			}
//		}
//		cout << endl << endl;
//		system("pause");
//		system("cls");
//		
//		}
//		else if (f == '7') {
//			system("cls");
//			cout << "<КРЕСТИК>\n";
//			cout << "\nУкажите длину: ";
//			cin >> d;
//			cout << "\n\nУкажите текстуру: ";
//			cin >> t;
//			cout << endl << endl;
//
//
//			system("cls");
//			cout << "Результат:\n\n";
//			if (d == 1) {
//				cout << t << endl << endl;
//			}
//			else if (d == 2) {
//				cout << t << p << t << endl;
//				cout << t << p << t << endl;
//			}
//			else  {
//				for (i = 0; i < d; i++) {
//					for (j = 0; j < d; j++) {
//						if (j == i or j == d - i - 1) {
//							cout << t;
//						}
//						else {
//							cout << p;
//						}
//					}
//					cout << endl;
//				}
//			}
//			cout << endl << endl;
//			system("pause");
//			system("cls");
//
//		}
//		else if (f == '8') {
//			system("cls");
//			cout << "<ПЛЮСИК>\n";
//			cout << "\nУкажите длину: ";
//			cin >> d;
//			cout << "\n\nУкажите текстуру: ";
//			cin >> t;
//			cout << endl << endl;
//
//			p1 = d / 2;
//			system("cls");
//			cout << "Результат:\n\n";
//			if (d == 1) {
//				cout << t << endl << endl;
//			}
//			else if (d == 2) {
//				cout << p << p << t << endl;
//				cout << t << p << t << endl;
//			}
//			else if (d % 2 == 1) {
//				for (i = 0; i < p1; i++) {
//					for (j = 0; j < p1; j++) {
//						cout << p << p;
//					}
//					cout << t << endl;
//				}
//				for (i = 0; i < d; i++) {
//					cout << t << p;
//				}
//				cout << endl;
//				for (i = 0; i < p1; i++) {
//					for (j = 0; j < p1; j++) {
//						cout << p << p;
//					}
//					cout << t << endl;
//				}
//			}
//			else if (d % 2 == 0) {
//				for (i = 0; i < p1; i++) {
//					for (j = 0; j < p1; j++) {
//						cout << p << p;
//					}
//					cout << t << endl;
//				}
//				for (i = 0; i < d; i++) {
//					cout << t << p;
//				}
//				cout << endl;
//				for (i = 0; i < p1 - 1; i++) {
//					for (j = 0; j < p1; j++) {
//						cout << p << p;
//					}
//					cout << t << endl;
//				}
//			}
//			cout << endl << endl;
//			system("pause");
//			system("cls");
//
//		}
//	}
//
//
//	
//	int _;
//	cin >> _;
//	return 0;
//};
