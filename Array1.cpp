#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int arrInt[10] = { 1, 3, -90, 12, 1, 666, 1000, 7, 8, 2 };
	cout << "������ INT:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrInt[" << i << "] | ��������: " << arrInt[i] << endl;
	};

	short arrShort[10] = { 2, -2, 10, 15, 1, 0, -5, 10, 9, 1 };
	cout << "\n������ SHORT:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrShort[" << i << "] | ��������: " << arrShort[i] << endl;
	};

	long arrLong[10] = { 100, 690, -244, 255, 10000, 0, 1, 10101, -1, 5 };
	cout << "\n������ LONG:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrLong[" << i << "] | ��������: " << arrLong[i] << endl;
	};

	float arrFloat[10] = { 1.01, -2.0, 105.555, 15.3, 3.333, 0.0001, -5.5, 10.0, 9.6, 6.9 };
	cout << "\n������ FLOAT:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrFloat[" << i << "] | ��������: " << arrFloat[i] << endl;
	};

	double arrDouble[10] = { 123.123, -2.0, 2.0, 1500.0051, 1.0, 0.1, 99.8765, 10.11, -1.1234, 8.8907 };
	cout << "\n������ DOUBLE:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrDouble[" << i << "] | ��������: " << arrDouble[i] << endl;
	};

	char arrChar[10] = { 'q', 1, 'w', 2, 'e', 3, 'r', '89', 5, 't' };
	cout << "\n������ CHAR:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrChar[" << i << "] | ��������: " << arrChar[i] << endl;
	};

	bool arrBool[10] = { 1, 2, 0, true, false, 166, 0, true, 244, 1 };
	cout << "\n������ BOOL:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrBool[" << i << "] | ��������: " << arrBool[i] << endl;
	};

	string arrString[10] = { "Hello", ",", "World", "!", "Today", "It", "Is", "Raining", "///", "T.T"};
	cout << "\n������ STRING:\n\n";
	for (int i = 0; i < 10; i++) {
		cout << "arrString[" << i << "] | ��������: " << arrString[i] << endl;
	};

	int _;
	cin >> _;
	return 0;
}