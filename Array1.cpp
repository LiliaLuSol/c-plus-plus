#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int arrInt[10] = { 1, 3, -90, 12, 1, 666, 1000, 7, 8, 2 };
	cout << "Массив INT:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrInt[" << i << "] | значение: " << arrInt[i] << endl;
	};

	short arrShort[10] = { 2, -2, 10, 15, 1, 0, -5, 10, 9, 1 };
	cout << "\nМассив SHORT:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrShort[" << i << "] | значение: " << arrShort[i] << endl;
	};

	long arrLong[10] = { 100, 690, -244, 255, 10000, 0, 1, 10101, -1, 5 };
	cout << "\nМассив LONG:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrLong[" << i << "] | значение: " << arrLong[i] << endl;
	};

	float arrFloat[10] = { 1.01, -2.0, 105.555, 15.3, 3.333, 0.0001, -5.5, 10.0, 9.6, 6.9 };
	cout << "\nМассив FLOAT:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrFloat[" << i << "] | значение: " << arrFloat[i] << endl;
	};

	double arrDouble[10] = { 123.123, -2.0, 2.0, 1500.0051, 1.0, 0.1, 99.8765, 10.11, -1.1234, 8.8907 };
	cout << "\nМассив DOUBLE:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrDouble[" << i << "] | значение: " << arrDouble[i] << endl;
	};

	char arrChar[10] = { 'q', 1, 'w', 2, 'e', 3, 'r', '89', 5, 't' };
	cout << "\nМассив CHAR:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrChar[" << i << "] | значение: " << arrChar[i] << endl;
	};

	bool arrBool[10] = { 1, 2, 0, true, false, 166, 0, true, 244, 1 };
	cout << "\nМассив BOOL:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrBool[" << i << "] | значение: " << arrBool[i] << endl;
	};

	string arrString[10] = { "Hello", ",", "World", "!", "Today", "It", "Is", "Raining", "///", "T.T"};
	cout << "\nМассив STRING:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrString[" << i << "] | значение: " << arrString[i] << endl;
	};

	int _;
	cin >> _;
	return 0;
}