#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int size, x, y;
	cout << "����� ������ ������������ ���������: ";
	cin >> size;

	//��������� ������������ ������ ��� ������������ ���������
	string** arr = new string* [size];
	for (int i = 0; i < size; i++) {
		arr[i] = new string[size];
	}

	// ������������� ������������ ���������
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == size / 2 && j == size / 2) {// ����� ������������ ���������
				arr[i][j] = '+';
			}
			else if (i == size / 2) { //��� x
				arr[i][j] = '-';
			}
			else if (j == size / 2) { //��� y
				arr[i][j] = '|';
			}
			else { //�������
				arr[i][j] = ' ';
			}
		}
	}
	//�����
	cout << "������� ���������� ����� (x, y): ";
	cin >> x >> y;
	system("cls");
	cout << "���������� �����: (" << x << ", " << y << ")" << endl;
	arr[size / 2 - y][size / 2 + x] = '*';

	//����� ��� ��������
	for (int i = 0; i < size; i++) {
		if (arr[i][size / 2 + x] != "+" and arr[i][size / 2 + x] != "-" and arr[i][size / 2 + x] != "|" and arr[i][size / 2 + x] != "*") {
			arr[i][size / 2 + x] = '.';
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[size / 2 - y][i] != "+" and arr[size / 2 - y][i] != "-" and arr[size / 2 - y][i] != "|" and arr[size / 2 - y][i] != "*") {
			arr[size / 2 - y][i] = '.';
		}
	}
	
	//����� �������
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	//������������ ������ - ��� ��� ������
	for (int i = 0; i < size; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}