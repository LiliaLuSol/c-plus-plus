#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");
	char f, t, p = ' ';
	int d, p1 = 1, i = 1, j, v, m, p2, p3, a;

	while (true) {

		cout << "<�������������� ������>\n\n";
		cout << "�������� ������:\n\n[1] �����\n\n[2] �������\n\n[3] �������������\n\n[4] �����������\n\n[5] ����\n\n";
		cin >> f;
		do {
			if (f != '1' and f != '2' and f != '3' and f != '4' and f != '5') {
				cout << "����� ������������ ��������. ����������, �������� ���\n\n";
				cin >> f;
			};
		} while (f != '1' and f != '2' and f != '3' and f != '4' and f != '5');
		if (f == '1') {
			system("cls");
			cout << "<�����>\n\n�������� ��� ������:\n\n[1] ��������������\n\n[2] ������������\n\n";
			cin >> f;

			do {
				if (f != '1' and f != '2') {
					cout << "����� ������������ ��������. ����������, �������� ���\n\n";
					cin >> f;
				};
			} while (f != '1' and f != '2');

			cout << "\n������� �����: ";
			cin >> d;
			cout << "\n\n������� ��������: ";
			cin >> t;
			cout << endl << endl;

			if (f == '1') {
				system("cls");
				cout << "���������:\n\n";
				i = 1;
				while (i <= d) {
					cout << t;
					i++;
				};
				cout << endl << endl;
				system("pause");
				system("cls");
			}
			else if (f == '2') {
				system("cls");
				i = 1;
				cout << "���������:\n\n";
				while (i <= d) {
					cout << t << endl;
					i++;
				};
				cout << endl << endl;
				system("pause");
				system("cls");
			};
		}
		else if (f == '2') {
			system("cls");
			cout << "<�������>\n\n�������� ��� ������:\n\n[1] ������\n\n[2] �����������\n\n";
			cin >> f;
			do {
				if (f != '1' and f != '2') {
					cout << "����� ������������ ��������. ����������, �������� ���\n\n";
					cin >> f;
				};
			} while (f != '1' and f != '2');

			cout << "\n������� �����: ";
			cin >> d;
			cout << "\n\n������� ��������: ";
			cin >> t;
			cout << endl << endl;

			if (f == '1') {
				system("cls");
				cout << "���������:\n\n";
				i = 1;
				while (i <= d) {
					cout << t << p;
					i++;
				};
				cout << endl;
				if (d != 1) {
					m = 2 * i - 1;
					i = 1;
					p1 = 1;
					while (i <= d - 2) {
						cout << t;
						while (p1 <= m - 4) {
							cout << p;
							p1++;

						};
						p1 = 1;
						cout << t << endl;
						i++;
					};
					i = 1;

					while (i <= d) {
						cout << t << p;
						i++;
					};
				};
				cout << endl << endl;
				system("pause");
				system("cls");
			}
			else if (f == '2') {
				system("cls");
				cout << "���������:\n\n";
				i = 1;
				while (i <= d) {
					cout << t << p;
					i++;
				};
				cout << endl;
				if (d != 1) {
					m = 2 * i - 1;
					i = 1;
					p1 = 1;
					while (i <= d - 2) {
						while (p1 <= d - 1) {
							cout << t << p;
							p1++;

						};
						p1 = 1;
						cout << t << endl;
						i++;
					};
					i = 1;

					while (i <= d) {
						cout << t << p;
						i++;
					};
				};
				cout << endl << endl;
				system("pause");
				system("cls");

			};
		}
		else if (f == '3') {
			system("cls");
			cout << "<�������������>\n\n�������� ��� ������:\n\n[1] ������\n\n[2] �����������\n\n";
			cin >> f;
			do {
				if (f != '1' and f != '2') {
					cout << "����� ������������ ��������. ����������, �������� ���\n\n";
					cin >> f;
				};
			} while (f != '1' and f != '2');

			cout << "\n������� ������: ";
			cin >> d;
			cout << "\n\n������� ������: ";
			cin >> v;
			cout << "\n\n������� ��������: ";
			cin >> t;
			cout << endl << endl;

			if (f == '1') {
				system("cls");
				cout << "���������:\n\n";
				if ((d == 1 and v == 0) or (d == 0 and v == 1)) {
					cout << t << endl;
				}
				else {
					i = 1;
					while (i <= d) {
						cout << t << p;
						i++;
					};
					cout << endl;
					m = 2 * i - 1;
					i = 1;
					p1 = 1;
					while (i <= v - 2) {
						cout << t;
						while (p1 <= m - 4) {
							cout << p;
							p1++;

						};
						p1 = 1;
						cout << t << endl;
						i++;
					};
					i = 1;
					while (i <= d) {
						cout << t << p;
						i++;
					};
				};
				cout << endl << endl;
				system("pause");
				system("cls");
			}
			else if (f == '2') {
				system("cls");
				cout << "���������:\n\n";
				if ((d == 1 and v == 0) or (d == 0 and v == 1)) {
					cout << t << endl;
				}
				else {
					i = 1;
					while (i <= d) {
						cout << t << p;
						i++;
					};
					cout << endl;
					i = 1;
					p1 = 1;
					if (v > d) {
						m = v - d;
						while (i <= v - 2) {
							while (p1 <= v - m - 1) {
								cout << t << p;
								p1++;
							};
							p1 = 1;
							cout << t << p << endl;
							i++;
						};
					}
					else if (v < d) {
						m = d - v;
						while (i <= v - 2) {
							while (p1 <= v + m - 1) {
								cout << t << p;
								p1++;
							};
							p1 = 1;
							cout << t << p << endl;
							i++;
						};
					}
					i = 1;
					while (i <= d) {
						cout << t << p;
						i++;
					};
				};
				cout << endl << endl;
				system("pause");
				system("cls");

			};
		}
		else if (f == '4') {
			system("cls");
			cout << "<�����������>\n\n�������� ��� ������:\n\n[1] ������\n\n[2] �����������\n\n";
			cin >> f;

			do {
				if (f != '1' and f != '2') {
					cout << "����� ������������ ��������. ����������, �������� ���\n\n";
					cin >> f;
				};
			} while (f != '1' and f != '2');

			cout << "\n������� ������: ";
			cin >> d;
			cout << "\n\n������� ��������: ";
			cin >> t;
			cout << endl << endl;

			if (f == '1') {
				system("cls");
				cout << "���������:\n\n";

				for (i = 0; i < d; i++) {
					for (j = 1; j < d - i; j++) {
						cout << p << p;
					}
					for (j = d - 2 * i; j <= d; j++) {
						if (i == 0 or i == d - 1) {
							cout << t << p;
						}
						else if (i > 0 and i < d - 1) {
							if (j == d or j == d - i * 2) {
								cout << t << p;
							}
							else {
								cout << p << p;
							}
						}

					}
					cout << endl;
				};
				cout << endl << endl;
				system("pause");
				system("cls");
			}
			else if (f == '2') {
				system("cls");
				cout << "���������:\n\n";
				for (int i = 0; i < d; i++) {
					for (int j = 1; j < d - i; j++) {
						cout << p << p;
					}
					for (int j = d - 2 * i; j <= d; j++) {
						cout << t << p;
					}
					cout << endl;
				}


				system("pause");
				system("cls");
			};
		}
		else if (f == '5') {
			system("cls");
			cout << "<����>\n\n";

			cout << "\n������� �����: ";
			int size;
			cin >> size;
			if (size % 2 == 0) {
				size++;
			}
			cout << "\n\n������� ��������: ";
			cin >> t;
			cout << endl << endl;
				system("cls");
				cout << "���������:\n\n";
				for (int k = 0; k < size; k++) {
					for ( int lo = 0; lo < size; lo++) {
						if (lo == size / 2 + 1 || lo == size / 2 - k) {
							cout << t;
						}
						else if (lo == k - size / 2 || lo == size - 1 - (k - size / 2)) {
							cout << t;
						}
						else {
							cout << p;
						}
						cout << endl;
					}
					break;
				}
				system("pause");
				system("cls");
			 

		}
	}

	int _;
	cin >> _;
	return 0;
}
		
	


	


/*
������
	int size
	for(int y=0 y<size y++
		for( int x = 0x<size x++
			if x == size/ 2 - y || x == size/ 2 + y || y == size / 2 + x || y == size / 2 - x + size -1
			(|| y == size/2) - ������� {
			cout << "+ "}
			else{
			cout << -





*/