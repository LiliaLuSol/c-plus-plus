//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//
//	int size, x, y;
//	
//		cout << "Введи размер координатной плоскости: ";
//		cin >> size;
//
//	while (true) {
//		//двумерный динамический массив для координатной плоскости
//		string** arr = new string * [size];
//		for (int i = 0; i < size; i++) {
//			arr[i] = new string[size];
//		}
//
//		// инициализация координатной плоскости
//		for (int i = 0; i < size; i++) {
//			for (int j = 0; j < size; j++) {
//				if (i == size / 2 && j == size / 2) {// центр координатной плоскости
//					arr[i][j] = '+';
//				}
//				else if (i == size / 2) { //ось x
//					arr[i][j] = '-';
//				}
//				else if (j == size / 2) { //ось y
//					arr[i][j] = '|';
//				}
//				else { //пустота
//					arr[i][j] = ' ';
//				}
//			}
//		}
//		//точка
//		
//			cout << "Введите координаты точки (x, y): ";
//			cin >> x >> y;
//			while (x >= size / 2 || y >= size / 2 || x <= -size / 2 || y <= -size / 2) {
//
//				cout << "Вышли за пределы плоскости\n ";
//				cout << "Введите координаты точки (x, y): ";
//				cin >> x >> y;
//
//			}
//			system("cls");
//			cout << "Координаты точки: (" << x << ", " << y << ")" << endl;
//			arr[size / 2 - y][size / 2 + x] = '*';
//
//			//место для пунктира
//			for (int i = 0; i < size; i++) {
//				if (arr[i][size / 2 + x] != "+" and arr[i][size / 2 + x] != "-" and arr[i][size / 2 + x] != "|" and arr[i][size / 2 + x] != "*") {
//					arr[i][size / 2 + x] = '.';
//				}
//			}
//			for (int i = 0; i < size; i++) {
//				if (arr[size / 2 - y][i] != "+" and arr[size / 2 - y][i] != "-" and arr[size / 2 - y][i] != "|" and arr[size / 2 - y][i] != "*") {
//					arr[size / 2 - y][i] = '.';
//				}
//			}
//
//			//вывод массива
//			for (int i = 0; i < size; i++) {
//				for (int j = 0; j < size; j++) {
//					cout << arr[i][j] << " ";
//				}
//				cout << endl;
//			}
//
//			//освобождение памяти - без нее ошибка
//			for (int i = 0; i < size; i++) {
//				delete[] arr[i];
//			}
//			delete[] arr;
//	}
//	
//
//	return 0;
//}




//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//
//	int sizeA, sizeB, x, y, v;
//
//	cout << "Введи размер карты AxB: ";
//	cin >> sizeA >> sizeB;
//	sizeA += 2;
//	sizeB += 2;
//
//	x = (sizeB - 1) / 2;
//	y = (sizeA - 1) / 2;
//	//двумерный динамический массив для координатной плоскости
//
//	while (true) {
//		string** arr = new string * [sizeA];
//		for (int i = 0; i < sizeA; i++) {
//			arr[i] = new string[sizeB];
//		}
//
//		//инициализация карты
//		for (int i = 0; i < sizeB; i++) {
//			arr[0][i] = "#";
//			arr[sizeA - 1][i] = "#";
//		}
//		for (int i = 0; i < sizeA; i++) {
//			arr[i][0] = "#";
//			for (int j = 0; j < sizeB - 1; j++) {
//				if (arr[i][j] != "#")
//					arr[i][j] = " ";
//			}
//			arr[i][sizeB - 1] = "#";
//		}
//
//		//чел
//		arr[y][x] = "*";
//
//		//движение
//		if (x > sizeB) {
//			cout << "Достигли предела\n\n";
//		}
//		else {
//			v = _getch();
//			switch (v) {
//				//^
//			case 119:
//			case 72:
//				arr[y][x] = " ";
//				arr[y - 1][x] = "*";
//				y = y - 1;
//				break;
//				//<
//			case 97:
//			case 75:
//				arr[y][x] = " ";
//				arr[y][x - 1] = "*";
//				x = x - 1;
//				break;
//				//>
//			case 100:
//			case 77:
//				arr[y][x] = " ";
//				arr[y][x + 1] = "*";
//				x = x + 1;
//				break;
//				//v
//			case 115:
//			case 80:
//				arr[y][x] = " ";
//				arr[y + 1][x] = "*";
//				y = y + 1;
//				break;
//			}
//		}
//
//		system("cls");
//		cout << "Сделай ход\n\n";
//
//		//вывод массива
//		for (int i = 0; i < sizeA; i++) {
//			for (int j = 0; j < sizeB; j++) {
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//
//		//освобождение памяти - без нее ошибка
//		for (int i = 0; i < sizeA; i++) {
//			delete[] arr[i];
//		}
//		delete[] arr;
//	}
//
//	int _;
//	cin >> _;
//	return 0;
//}