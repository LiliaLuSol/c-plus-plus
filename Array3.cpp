#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(0, "");

	int arr[7], v, p;
	int a, b, c, d, e, f, g;

	cout << "������! ����� 7 ����� ����� ����� �������� ������ � ���� :�\n\n";
	for (int i = 0; i < 7; i++) {
		cout << "����� " << i + 1 << ": ";
		cin >> arr[i];
	}
	a = arr[0];
	b = arr[1];
	c = arr[2];
	d = arr[3];
	e = arr[4];
	f = arr[5];
	g = arr[6];
	cout << "\n�������!\n\n";
	system("pause");
	system("cls");
	do {
		cout << "<����>\n\n";
		cout << "��� �� ������ ������� � ����� �������?\n\n";
		cout << "[1] ������������� �� �����������\n[2] ������������� �� ��������\n"
			<< "[3] ����������� ���\n[4] ������� ���\n[5] ������� ��\n"
			<< "[6] ��������� ��\n[7] �������� ��\n[8] ��������\n\n"
			<< "[9] ������ ����� �����\n\n";
		cout << "��� �����: ";
		v = _getch();
		cout << endl << endl;

		do {
			if (v != 49 and v != 50 and v != 51 and v != 52 and v != 53 and v != 54 and v != 55 and v != 56 and v != 57) {
				system("cls");
				cout << "<����>\n\n";
				cout << "��� �� ������ ������� � ����� �������?\n\n";
				cout << "[1] ������������� �� �����������\n[2] ������������� �� ��������\n"
					<< "[3] ����������� ���\n[4] ������� ���\n[5] ������� ��\n"
					<< "[6] ��������� ��\n[7] �������� ��\n[8] ��������\n\n"
					<< "[9] ������ ����� �����\n\n";
				cout << "��� �����: ";
				v = _getch();
				cout << endl << endl;
			};
		} while (v != 49 and v != 50 and v != 51 and v != 52 and v != 53 and v != 54 and v != 55 and v != 56 and v != 57);

		switch (v)
		{
		case 49:
			system("cls");
			cout << "��: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			}
			cout << "\n\n�����: ";
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 6 - i; j++) {
					if (arr[j] > arr[j + 1]) {
						p = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = p;
					}
				};
			};
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			};
			cout << endl << endl;
			system("pause");
			system("cls");
			arr[0] = a;
			arr[1] = b;
			arr[2] = c;
			arr[3] = d;
			arr[4] = e;
			arr[5] = f;
			arr[6] = g;
			break;
		case 50:
			system("cls");
			cout << "��: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			}
			cout << "\n\n�����: ";
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 6 - i; j++) {
					if (arr[j] < arr[j + 1]) {
						p = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = p;
					}
				};
			};
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			};
			cout << endl << endl;
			system("pause");
			system("cls");
			arr[0] = a;
			arr[1] = b;
			arr[2] = c;
			arr[3] = d;
			arr[4] = e;
			arr[5] = f;
			arr[6] = g;
			break;
		case 51:
			system("cls");
			cout << "��: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			}
			cout << endl << endl;
			for (int i = 0; i < 7; i++) {
				cout << arr[i];
				if (i != 6) {
					cout << " * ";
				}
			}
			cout << "\n\n�����: ";
			p = arr[0];
			for (int i = 1; i < 7; i++) {
				p *= arr[i];
			};
			cout << p;
			cout << endl << endl;
			system("pause");
			system("cls");
			break;
		case 52:
			system("cls");
			cout << "��: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			}
			cout << endl << endl;
			for (int i = 0; i < 7; i++) {
				cout << arr[i];
				if (i != 6) {
					cout << " + ";
				}
			}
			cout << "\n\n�����: ";
			p = arr[0];
			for (int i = 1; i < 7; i++) {
				p += arr[i];
			};
			cout << p;
			cout << endl << endl;
			system("pause");
			system("cls");
			break;
		case 53:
			system("cls");
			cout << "�� �������?\n\n";
			cin >> p;
			cout << endl;
			cout << "��: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			}
			cout << endl << endl;
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " + " << p << "   ";
			}
			cout << "\n\n�����: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] + p << " ";
			};
			cout << endl << endl;
			system("pause");
			system("cls");
			break;
		case 54:
			system("cls");
			cout << "�� �������?\n\n";
			cin >> p;
			cout << endl;
			cout << "��: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			}
			cout << endl << endl;
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " / " << p << "   ";
			}
			cout << "\n\n�����: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] / p << " ";
			};
			cout << endl << endl;
			system("pause");
			system("cls");
			break;
		case 55:
			system("cls");
			cout << "�� �������?\n\n";
			cin >> p;
			cout << endl;
			cout << "��: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			}
			cout << endl << endl;
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " * " << p << "   ";
			}
			cout << "\n\n�����: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] * p << " ";
			};
			cout << endl << endl;
			system("pause");
			system("cls");
			break;
		case 56:
			system("cls");
			cout << "��: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			}
			cout << endl << endl;
			cout << "\n\n�����: \n";
			for (int i = 0; i < 7; i++) {
				arr[i] = 0;
			};
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			};
			cout << endl << endl;
			system("pause");
			system("cls");
			break;
		case 57:
			system("cls");
			cout << "��: ";
			for (int i = 0; i < 7; i++) {
				cout << arr[i] << " ";
			}
			cout << endl << endl;
			cout << "\n\n�����: ";
			for (int i = 0; i < 7; i++) {
				cout << "����� ����� " << i + 1 << ": ";
				cin >> arr[i];
			}
			cout << endl << endl;
			for (int i = 0; i < 7; i++) {
				cout << "�����: " << arr[i] << " ";
			}
			cout << endl << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (true);

	int _;
	cin >> _;
}