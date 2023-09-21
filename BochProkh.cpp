#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	char f, t, p = ' ';
	int d, p1 = 1, i = 1, v;

	while (true) {

		cout << "<ГЕОМЕТРИЧЕСКИЕ ФИГУРЫ>\n\n";
		cout << "Выберите фигуру:\n\n[1] Линия\n\n[2] Квадрат\n\n[3] Прямоугольник\n\n";
		cin >> f;
		do {
			if (f != '1' and f != '2' and f != '3') {
				cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
				cin >> f;
			};
		} while (f != '1' and f != '2' and f != '3');
		if (f == '1') {
			system("cls");
			cout << "<ЛИНИЯ>\n\nВыберите тип фигуры:\n\n[1] Горизонтальная\n\n[2] Вертикальная\n\n";
			cin >> f;

			do {
				if (f != '1' and f != '2') {
					cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
					cin >> f;
				};
			} while (f != '1' and f != '2');

			cout << "\nУкажите длину: ";
			cin >> d;
			cout << "\n\nУкажите текстуру: ";
			cin >> t;
			cout << endl << endl;

			if (f == '1') {
				system("cls");
				cout << "Результат:\n\n";
				while (i <= d) {
					cout << t;
					i++;
				};
				cout << endl << endl;
				system("pause");
				system("cls");
			}
			else if (f == '2') {
				system("cls");
				cout << "Результат:\n\n";
				while (i <= d) {
					cout << t << endl;
					i++;
				};
				cout << endl << endl;
				system("pause");
				system("cls");
			};
		}
		else if (f == '2') {
			system("cls");
			cout << "<КВАДРАТ>\n\nВыберите тип фигуры:\n\n[1] Пустой\n\n[2] Заполненный\n\n";
			cin >> f;
			do {
				if (f != '1' and f != '2') {
					cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
					cin >> f;
				};
			} while (f != '1' and f != '2');

			cout << "\nУкажите длину: ";
			cin >> d;
			cout << "\n\nУкажите текстуру: ";
			cin >> t;
			cout << endl << endl;

			if (f == '1') {
				system("cls");
				cout << "Результат:\n\n";
				i = 1;
				while (i <= d) {
					cout << t;
					i++;
				};
				cout << endl;
				i = 1;
				while (i <= d - 2) {
					cout << t;
					while (p1 <= d - 2) {
						cout << p;
						p1++;
					};
					p1 = 1;
					cout << t << endl;
					i++;
				};
				i = 1;
				while (i <= d) {
					cout << t;
					i++;
				};
				cout << endl << endl;
				system("pause");
				system("cls");
			}
			else if (f == '2') {
				system("cls");
				cout << "Результат:\n\n";
				i = 1;
				while (i <= d) {
					cout << t;
					i++;
				};
				cout << endl;
				i = 1;
				while (i <= d - 2) {
					cout << t;
					while (p1 <= d - 2) {
						cout << t;
						p1++;
					};
					p1 = 1;
					cout << t << endl;
					i++;
				};
				i = 1;
				while (i <= d) {
					cout << t;
					i++;
				};
				cout << endl << endl;
				system("pause");
				system("cls");

			};
		}
		else if (f == '3') {
		system("cls");
		cout << "<ПРЯМОУГоЛЬНИК>\n\nВыберите тип фигуры:\n\n[1] Пустой\n\n[2] Заполненный\n\n";
		cin >> f;
		do {
			if (f != '1' and f != '2') {
				cout << "Ввели неккоректное значение. Пожалуйста, измените его\n\n";
				cin >> f;
			};
		} while (f != '1' and f != '2');

		cout << "\nУкажите ширину: ";
		cin >> d;
		cout << "\n\nУкажите высоту: ";
		cin >> v;
		cout << "\n\nУкажите текстуру: ";
		cin >> t;
		cout << endl << endl;

		if (f == '1') {
			system("cls");
			cout << "Результат:\n\n";
			i = 1;
			while (i <= d) {
				cout << t;
				i++;
			};
			cout << endl;
			i = 1;
			while (i <= v  - 2) {
				cout << t;
				while (p1 <= d - 2) {
					cout << p;
					p1++;
				};
				p1 = 1;
				cout << t << endl;
				i++;
			};
			i = 1;
			while (i <= d) {
				cout << t;
				i++;
			};
			cout << endl << endl;
			system("pause");
			system("cls");
		}
		else if (f == '2') {
			system("cls");
			cout << "Результат:\n\n";
			i = 1;
			while (i <= d) {
				cout << t;
				i++;
			};
			cout << endl;
			i = 1;
			while (i <= v - 2) {
				cout << t;
				while (p1 <= v) {
					cout << t;
					p1++;
				};
				p1 = 1;
				cout << t << endl;
				i++;
			};
			i = 1;
			while (i <= d) {
				cout << t;
				i++;
			};
			cout << endl << endl;
			system("pause");
			system("cls");

		};
}
	};

	
	int _;
	cin >> _;
	return 0;
}
