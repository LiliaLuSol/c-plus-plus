#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(0, "");

	char v,r ='t';
	int health = 3, a = 0, b = 10, x, y; 

	while (true) {
		cout << "����\n\n���� HP: " << health << "\n��������: " << a << " - "<< b << "\n\n�������� ����� : \n\n";
		cout << "[1] ������ ����\n\n[2] ���������\n\n";
		cin >> v;
		do {
			if (v != '1' and v != '2') {
				cout << "����� ������������ ��������. �������� ���\n\n";
				cin >> v;
			}
		}while (v != '1' and v != '2');
		system("cls");
		if (v == '2') {
			cout << "�������� ���������:\n\n[1] ���������� ������\n\n[2] ��������\n\n";
			cin >> v;
			do {
				if (v != '1' and v != '2') {
					cout << "����� ������������ ��������. �������� ���\n\n";
					cin >> v;
				}
			} while (v != '1' and v != '2');
			system("cls");
			if (v == '1') {
				cout << "������� ���������� ������: ";
				cin >> health;
				cout << endl << endl;
				system("pause");
				system("cls");
				
			}
			else if (v == '2') {
				cout << "������� ������ ���������: ";
				cin >> a;
				cout << "������� ����� ���������: ";
				cin >> b;
				cout << endl << endl;
				system("pause");
				system("cls");
				
			};
		}
		else if (v == '1') {
			system("cls");
			cout << "���� HP : " << health << "\n�������� : " << a << " - " << b << "\n\n";

			x = rand();

			do {
				if (x < a or x > b) {
					x = rand();
				}
			} while (x < a or x > b);

			cout << x << endl;
			do {
				cout << "������ �����: ";
				cin >> y;

				do {
					if (y < a or y > b) {
						cout << "����� ������������ ��������. �������� ���\n\n";
						cin >> y;
					}
				} while (y < a or y > b);
				if (y >= a or y <= b) {
					if (y == x) {
						cout << "\n�� ������!!!\n\n";
						r = 'f';
						system("pause");
						system("cls");
					}
					else {
						health -= 1;
						cout << "\n�� ������... �������� ������: " << health << endl << endl;
						if (health == 0) {
							r = 'f';
							cout << "\n������, �� �� ��������...\n\n";
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