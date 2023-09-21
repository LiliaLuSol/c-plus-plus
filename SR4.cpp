#include <iostream>
using namespace std;

int main() {

	setlocale(0, "");

	cout << "Введите число: ";
	int a,r;
	cin >> a;
	for (int i = 1; i < 10; i++) {
		cout << endl << "Реши это: " << a << " * " << i << endl;
		cin >> r;
		if (r == a * i) {
			if (i >= 1 and i < 9) {
				cout << "\nПример решен правильно, умница!!";
			}
			else {
				cout << "\nПоздравляем, вы знаете таблицу умножения!";
			}
		}
		else {
			cout << "\nИди учись,бака( Начни все заново >=D ";
			break;
		};
	};


	int _;
	cin >> _;
	return 0;
}
