#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, y, x1, y1, key = 0;

	setlocale(0, "");

	// ���� X � Y 
	cout << "������� X - ";
	cin >> x;
	cout << "������� Y - ";
	cin >> y;

	//������ ������
	system("pause");
	system("cls");

	x = abs(x);
	y = abs(y);

	// �������� ���������� ������������� ������� 
	string** arr = new string * [y * 2 + 1];
	for (int i = 0; i < y * 2 + 1; i++)
	{
		arr[i] = new string[x * 2 + 1];
	}

	// �������� � ������ ������������ ���������
	for (int i = 0; i < y * 2 + 1; i++) {
		if (i != y) {
			for (int j = 0; j < x * 2 + 1; j++) {

				if (j != x) {
					arr[i][j] = "  ";
				}
				else {
					arr[i][j] = "# ";
				}
			}
		}
		else {
			for (int j = 0; j < x * 2 + 1; j++) {
				arr[i][j] = "# ";
			}
		}
	}
	// ����� �������
	for (int i = 0; i < y * 2 + 1; i++) {
		for (int j = 0; j < x * 2 + 1; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}

	while (true) {
		cout << "\n\n������� ���������� ����� \n";
		cout << "������� X ����� -  ";
		cin >> x1;
		cout << "������� Y ����� -  ";
		cin >> y1;

		//�������� 
		if (abs(x1) > x or abs(y1) > y) {
			cout << "\n�� ����� ������������ ��������� �����";
			continue;
		}
		else {
			break;
		}
	}


	//������ ������
	system("pause");
	system("cls");

	while (true) {

		cout << "����� (" << x1 << "," << y1 << ")\n\n";

		//���������� ����� � ������ 
		if (x1 >= 0 and y1 >= 0) {
			arr[y - y1][x1 + x] = "0 ";
			// ������ � ��� x
			for (int i = 1; i < y1; i++) {
				arr[y - y1 + i][x1 + x] = "' ";
			}
			// ������ � ��� y
			for (int i = 1; i < x1; i++) {
				arr[y - y1][x1 + x - i] = "- ";
			}
		}
		else if (x1 <= 0 and y1 > 0) {
			x1 = abs(x1);
			arr[y - y1][x - x1] = "0 ";
			// ������ � ��� x
			for (int i = 1; i < y1; i++) {
				arr[y - y1 + i][x - x1] = "' ";
			}
			// ������ � ��� y
			for (int i = 1; i < x1; i++) {
				arr[y - y1][x - x1 + i] = "- ";
			}
		}
		else if (x1 < 0 and y1 <= 0) {
			x1 = abs(x1);
			y1 = abs(y1);
			arr[y + y1][x - x1] = "0 ";
			// ������ � ��� x
			for (int i = 1; i < y1; i++) {
				arr[y + y1 - i][x - x1] = "' ";
			}
			// ������ � ��� y
			for (int i = 1; i < x1; i++) {
				arr[y + y1][x - x1 + i] = "- ";
			}
		}
		else if (x1 > 0 and y1 < 0) {
			y1 = abs(y1);
			arr[y + y1][x1 + x] = "0 ";
			// ������ � ��� x
			for (int i = 1; i < y1; i++) {
				arr[y + y1 - i][x + x1] = "' ";
			}
			// ������ � ��� y
			for (int i = 1; i < x1; i++) {
				arr[y + y1][x + x1 - i] = "- ";
			}
		}

		// ����� �������
		for (int i = 0; i < y * 2 + 1; i++) {
			for (int j = 0; j < x * 2 + 1; j++) {
				cout << arr[i][j];
			}
			cout << "\n";
		}
		cout << "\n�� ������ ����������?\n1.��\n2.���";
		key = _getch();
		system("cls");
		if (key == 49) {
			while (true) {
				cout << "������� ���������� ����� \n";
				cout << "������� X ����� -  ";
				cin >> x1;
				cout << "������� Y ����� -  ";
				cin >> y1;

				//�������� 
				if (abs(x1) > x or abs(y1) > y) {
					cout << "\n�� ����� ������������ ��������� �����";
					continue;
				}
				else {
					break;
				}
			}
			system("pause");
			system("cls");
		}
		else {
			break;
		}

	}
}