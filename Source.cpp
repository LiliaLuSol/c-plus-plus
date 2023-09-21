#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int a, b, c;
	
	cout << "Введите первое число: ";
	cin >> a;
	cout << "\nВведите второе число: ";
	cin >> b;
	cout << "\nВведите третье число: ";
	cin >> c;
	
	if (a == b or b == c or a == c) {

		if (a == b and b == c and a == c) {
			cout << "\nПравильно: " << a;
		}
		else if (a == b) {
			if (a > c) {
				cout << "\nПравильно: " << c << " " << a;
			}
			else {
				cout << "\nПравильно: " << a << " " << c;
			}

		}
		else if (a == c) {
			if (a > b) {
				cout << "\nПравильно: " << b << " " << a;
			}
			else {
				cout << "\nПравильно: " << a << " " << b;
			}
		}
		else if (b == c) {
			if (b > c) {
				cout << "\nПравильно: " << c << " " << b;
			}
			else {
				cout << "\nПравильно: " << b << " " << c;
			}
		};
	}
	else{


			if (a > b and a > c) {
				if (b > c) {
					cout << "\nПравильно: " << c << " " << b << " " << a;
				}
				else {
					cout << "\nПравильно: " << b << " " << c << " " << a;
				}
			}
			else if (b > a and b > c) {
				if (a > c) {
					cout << "\nПравильно: " << c << " " << a << " " << b;
				}
				else {
					cout << "\nПравильно: " << a << " " << c << " " << b;
				}
			}
			else if (c >= a and c >= b) {
				if (a >= b) {
					cout << "\nПравильно: " << b << " " << a << " " << c;
				}
				else {
					cout << "\nПравильно: " << a << " " << b << " " << c;
				}
			};
		};

	int _;
	cin >> _;

	return 0;
}