#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int a, b, c;
	
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "\n������� ������ �����: ";
	cin >> b;
	cout << "\n������� ������ �����: ";
	cin >> c;
	
	if (a == b or b == c or a == c) {

		if (a == b and b == c and a == c) {
			cout << "\n���������: " << a;
		}
		else if (a == b) {
			if (a > c) {
				cout << "\n���������: " << c << " " << a;
			}
			else {
				cout << "\n���������: " << a << " " << c;
			}

		}
		else if (a == c) {
			if (a > b) {
				cout << "\n���������: " << b << " " << a;
			}
			else {
				cout << "\n���������: " << a << " " << b;
			}
		}
		else if (b == c) {
			if (b > c) {
				cout << "\n���������: " << c << " " << b;
			}
			else {
				cout << "\n���������: " << b << " " << c;
			}
		};
	}
	else{


			if (a > b and a > c) {
				if (b > c) {
					cout << "\n���������: " << c << " " << b << " " << a;
				}
				else {
					cout << "\n���������: " << b << " " << c << " " << a;
				}
			}
			else if (b > a and b > c) {
				if (a > c) {
					cout << "\n���������: " << c << " " << a << " " << b;
				}
				else {
					cout << "\n���������: " << a << " " << c << " " << b;
				}
			}
			else if (c >= a and c >= b) {
				if (a >= b) {
					cout << "\n���������: " << b << " " << a << " " << c;
				}
				else {
					cout << "\n���������: " << a << " " << b << " " << c;
				}
			};
		};

	int _;
	cin >> _;

	return 0;
}