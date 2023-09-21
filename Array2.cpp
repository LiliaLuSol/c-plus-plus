#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(0, "");
	int arr[5];
	cout << "Привет! Введи 5 чисел с которыми ты хочешь увидеть классические операции:\n\n";
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ": ";
		cin >> arr[i];
	};

	//tab
	for (int i = 0; i < 5; i++) {
		cout << "\n| Таблица: \x1b[94m" << i + 1 << "\x1b[0m" << endl;
		for (int j = 0; j < 51; j++) {
			cout << '-';
		};
		cout << "\n|" << setw(8) << right << "Число";
		cout << setw(4) << right << "|";
		cout << setw(11) << right << "Пример";
		cout << setw(7) << right << "|";
		cout << setw(14) << right << "Результат";
		cout << setw(7) << right << "|\n";
		for (int j = 0; j < 51; j++) {
			cout << '-';
		};
		cout << "\n|" << setw(6) << right << arr[i];
		cout << setw(6) << right << "|";
		cout << setw(6) << right << arr[i] << "\x1b[94m + \x1b[0m" << arr[i];
		cout << setw(8) << right << "|";
		cout << setw(10) << right << arr[i] + arr[i];
		cout << setw(11) << right << "|\n";
		for (int j = 0; j < 51; j++) {
			cout << '-';
		};
		cout << "\n|" << setw(6) << right << arr[i];
		cout << setw(6) << right << "|";
		cout << setw(6) << right << arr[i] << "\x1b[94m - \x1b[0m" << arr[i];
		cout << setw(8) << right << "|";
		cout << setw(10) << right << arr[i] - arr[i];
		cout << setw(11) << right << "|\n";
		for (int j = 0; j < 51; j++) {
			cout << '-';
		};
		cout << "\n|" << setw(6) << right << arr[i];
		cout << setw(6) << right << "|";
		cout << setw(6) << right << arr[i] << "\x1b[94m / \x1b[0m" << arr[i];
		cout << setw(8) << right << "|";
		cout << setw(10) << right << arr[i] / arr[i];
		cout << setw(11) << right << "|\n";
		for (int j = 0; j < 51; j++) {
			cout << '-';
		};
		cout << "\n|" << setw(6) << right << arr[i];
		cout << setw(6) << right << "|";
		cout << setw(6) << right << arr[i] << "\x1b[94m * \x1b[0m" << arr[i];
		cout << setw(8) << right << "|";
		cout << setw(10) << right << arr[i] * arr[i];
		cout << setw(11) << right << "|\n";
		for (int j = 0; j < 51; j++) {
			cout << '-';
		};
		cout << endl;
	};
	int _;
	cin >> _;
	return 0;
}