#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "task 2\n\n";

	cout << "Ваш номер: \n" << "Но лучше от 1 до 4: \n" << "Я не настаиваю: ";
	int a;
	cin >> a;

	if (a == 1) {
		cout << "Зима. Одень шапку, бака.";
	}
	else if (a == 2) {
		cout << "Весна. Скоро сессия ((";
	}
	else if (a == 3) {
		cout << "Лето. Живи пока можешь";
	}
	else if (a == 4) {
		cout << "Осень. Ждем хеллоуин. Снова по-новой Т.Т";
	}
	else {
		cout << "Такого еще не придумали...";
	};

	int _;
	cin >> _;


	return 0;
}