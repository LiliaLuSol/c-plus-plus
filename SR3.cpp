#include <iostream>
using namespace std;

int main() {
	
	setlocale(0, "");

	cout << "������� �����: ";
	int n;
	cin >> n;
	
	if (n < 0) {
		cout << "\n������!����� ������ 0";
	}
	else if (n > 100) {
		cout << "\n������!����� ������ 100";
	}
	else if (n >= 0 and n <= 10) {
		cout << "\n����� � ���������: 0-10";
	}
	else if (n >= 11 and n <= 20) {
		cout << "\n����� � ���������: 11-20";
	}
	else if (n >= 21 and n <= 30) {
		cout << "\n����� � ���������: 21-30";
	}
	else if (n >= 31 and n <= 40) {
		cout << "\n����� � ���������: 31-40";
	}
	else if (n >= 41 and n <= 50) {
		cout << "\n����� � ���������: 41-50";
	}
	else if (n >= 51 and n <= 60) {
		cout << "\n����� � ���������: 51-60";
	}
	else if (n >= 61 and n <= 70) {
		cout << "\n����� � ���������: 61-70";
	}
	else if (n >= 71 and n <= 80) {
		cout << "\n����� � ���������: 71-80";
	}
	else if (n >= 81 and n <= 90) {
		cout << "\n����� � ���������: 81-90";
	}
	else if (n >= 91 and n <= 100) {
		cout << "\n����� � ���������: 91-100";
	};

	int _;
	cin >> _;
	return 0;
}