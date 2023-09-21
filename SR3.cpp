#include <iostream>
using namespace std;

int main() {
	
	setlocale(0, "");

	cout << "Введите число: ";
	int n;
	cin >> n;
	
	if (n < 0) {
		cout << "\nОшибка!Число меньше 0";
	}
	else if (n > 100) {
		cout << "\nОшибка!Число больше 100";
	}
	else if (n >= 0 and n <= 10) {
		cout << "\nЦифра в диапазоне: 0-10";
	}
	else if (n >= 11 and n <= 20) {
		cout << "\nЦифра в диапазоне: 11-20";
	}
	else if (n >= 21 and n <= 30) {
		cout << "\nЦифра в диапазоне: 21-30";
	}
	else if (n >= 31 and n <= 40) {
		cout << "\nЦифра в диапазоне: 31-40";
	}
	else if (n >= 41 and n <= 50) {
		cout << "\nЦифра в диапазоне: 41-50";
	}
	else if (n >= 51 and n <= 60) {
		cout << "\nЦифра в диапазоне: 51-60";
	}
	else if (n >= 61 and n <= 70) {
		cout << "\nЦифра в диапазоне: 61-70";
	}
	else if (n >= 71 and n <= 80) {
		cout << "\nЦифра в диапазоне: 71-80";
	}
	else if (n >= 81 and n <= 90) {
		cout << "\nЦифра в диапазоне: 81-90";
	}
	else if (n >= 91 and n <= 100) {
		cout << "\nЦифра в диапазоне: 91-100";
	};

	int _;
	cin >> _;
	return 0;
}