#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "task 2\n\n";

	cout << "��� �����: \n" << "�� ����� �� 1 �� 4: \n" << "� �� ���������: ";
	int a;
	cin >> a;

	if (a == 1) {
		cout << "����. ����� �����, ����.";
	}
	else if (a == 2) {
		cout << "�����. ����� ������ ((";
	}
	else if (a == 3) {
		cout << "����. ���� ���� ������";
	}
	else if (a == 4) {
		cout << "�����. ���� ��������. ����� ��-����� �.�";
	}
	else {
		cout << "������ ��� �� ���������...";
	};

	int _;
	cin >> _;


	return 0;
}