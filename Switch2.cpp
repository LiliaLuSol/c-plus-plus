#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	int v;
	char r = 't';
	do {
		cout << "<���������>\n\n";
		cout << "[1] ������� �����\n\n[2] ���������� �����\n\n[3] �����\n\n";
		cin >> v;

		do {
			if (v != 1 and v != 2 and v != 3) {
				cout << "\n\n������� ����������� ��������. ���������� �������� ���\n\n";
				cin >> v;
			};
		} while (v != 1 and v != 2 and v != 3);

		if (v == 1) {
			system("cls");
			cout << "�������� ����� ����� ������� ������ ��������� �� ���������� ����:\n\n";
			cout << "[1] ��������\n\n[2] �����\n\n[3] ������\n\n[4] �����\n\n[5] �����\n\n";
			cout << "[6] ������\n\n[7] ��������\n\n[8] ����\n\n[9] �����\n\n[10] ������\n\n";
			cout << "[11] ����\n\n[12] ������\n\n[13] ��������\n\n[14] ��������\n\n[15] �������\n\n";
			cout << "�����: ";
			cin >> v;
			cout << endl << endl;

			switch (v)
			{
			case 1:
				cout << "�������� ---> Grapes\n\n";
				r = 'f';
				break;
			case 2:
				cout << "����� ---> Cherry\n\n";
				r = 'f';
				break;
			case 3:
				cout << "������ ---> Raspberry\n\n";
				r = 'f';
				break;
			case 4:
				cout << "����� ---> Lemon\n\n";
				r = 'f';
				break;
			case 5:
				cout << "����� ---> Mango\n\n";
				r = 'f';
				break;
			case 6:
				cout << "������ ---> Apple\n\n";
				r = 'f';
				break;
			case 7:
				cout << "�������� ---> Strawberry\n\n";
				r = 'f';
				break;
			case 8:
				cout << "���� ---> Melon\n\n";
				r = 'f';
				break;
			case 9:
				cout << "����� ---> Coconut\n\n";
				r = 'f';
				break;
			case 10:
				cout << "������ ---> Pinapple\n\n";
				r = 'f';
				break;
			case 11:
				cout << "���� ---> Kiwi fruit\n\n";
				r = 'f';
				break;
			case 12:
				cout << "������ ---> Peach\n\n";
				r = 'f';
				break;
			case 13:
				cout << "�������� ---> Tangerine\n\n";
				r = 'f';
				break;
			case 14:
				cout << "�������� ---> Orange\n\n";
				r = 'f';
				break;
			case 15:
				cout << "������� ---> Avocado\n\n";
				r = 'f';
				break;
			default:
				r = 't';
				break;
			};
			
			cout << "\n\n<������� � ����>\n\n";
			system("pause");
			system("cls");
		}
		else if (v == 2) {
			system("cls");
			cout << "�������� ����� ����� ������� ������ ��������� �� ������� ����:\n\n";
			cout << "[1] Aubergine\n\n[2] Cymbling\n\n[3] Bean\n\n[4] Pepper\n\n[5] Celery\n\n";
			cout << "[6] Tomato\n\n[7] Pumpkin\n\n[8] Pea\n\n[9] Parsley\n\n[10] Dill\n\n";
			cout << "[11] Cabbage\n\n[12] Haricot\n\n[13] Potatoes\n\n[14] Turnip\n\n[15] Garlic\n\n";
			cout << "�����: ";
			cin >> v;
			cout << endl << endl;

			switch (v)
			{
			case 1:
				cout << "Aubergine ---> ��������\n\n";
				r = 'f';
				break;
			case 2:
				cout << "Cymbling ---> ��������\n\n";
				r = 'f';
				break;
			case 3:
				cout << "Bean ---> ����\n\n";
				r = 'f';
				break;
			case 4:
				cout << "Pepper ---> �����\n\n";
				r = 'f';
				break;
			case 5:
				cout << "Celery ---> ���������\n\n";
				r = 'f';
				break;
			case 6:
				cout << "Tomato ---> �������e\n\n";
				r = 'f';
				break;
			case 7:
				cout << "Pumpkin ---> �����\n\n";
				r = 'f';
				break;
			case 8:
				cout << "Pea ---> �����\n\n";
				r = 'f';
				break;
			case 9:
				cout << "Parsley ---> ��������\n\n";
				r = 'f';
				break;
			case 10:
				cout << "Dill ---> �����\n\n";
				r = 'f';
				break;
			case 11:
				cout << "Cabbage ---> �������\n\n";
				r = 'f';
				break;
			case 12:
				cout << "Haricot ---> ������\n\n";
				r = 'f';
				break;
			case 13:
				cout << "Potatoes ---> ���������\n\n";
				r = 'f';
				break;
			case 14:
				cout << "Turnip ---> ����\n\n";
				r = 'f';
				break;
			case 15:
				cout << "Garlic ---> ������\n\n";
				r = 'f';
				break;
			default:
				r = 't';
				break;
			};

			cout << "\n\n<������� � ����>\n\n";
			system("pause");
			system("cls");
		}
		else if (v == 3) {
			system("cls");
			cout << "����������� �����?\n\n[1] ��     [2] ���\n\n";
			cin >> v;
			if (v != 1 and v != 2) {
				do {
					cout << "\n\n����� ������������ ��������.����������, �������� ���\n\n";
					cin >> v;
				} while (v != 1 and v != 2);
			};
			if (v == 1) {
				system("cls");
				cout << "����������� ����� �� ����������...";
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