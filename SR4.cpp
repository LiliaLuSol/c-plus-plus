#include <iostream>
using namespace std;

int main() {

	setlocale(0, "");

	cout << "������� �����: ";
	int a,r;
	cin >> a;
	for (int i = 1; i < 10; i++) {
		cout << endl << "���� ���: " << a << " * " << i << endl;
		cin >> r;
		if (r == a * i) {
			if (i >= 1 and i < 9) {
				cout << "\n������ ����� ���������, ������!!";
			}
			else {
				cout << "\n�����������, �� ������ ������� ���������!";
			}
		}
		else {
			cout << "\n��� �����,����( ����� ��� ������ >=D ";
			break;
		};
	};


	int _;
	cin >> _;
	return 0;
}
