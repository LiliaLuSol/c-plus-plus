//#include <iostream>
//#include <cstring>
//#include <chrono>
//#include <vector>
//#include <random>
//#include <conio.h>
//#include <Windows.h>
//
//using namespace std;
//using namespace chrono;
//
////тексты, счетчик ошибок и время
//vector <string> texts = { "Бургер ест бургеры!",
//					"Мост упал на небо. Это был конец Света.",
//					"Танцы с бубном закончились неудачно.",
//					"Дождик капает по лужам крови... Он бежал через переулки на свет фонаря.",
//					"Программисты не люди. И это точка.(.)Т.Т" };
//int errors = 0;
//time_point <steady_clock> start, finish;
//
////функция для ввода текста по символам
//void textChar(const string& text) {
//	for (char c : text) {
//		char v = _getch();
//		while (v != c) {
//			errors++;
//			//cout << "\nНеверный символ! Попробуй еще раз...\n";
//			v = _getch();
//		}
//		cout << c;
//	}
//}
//
//int main(){
//
//	setlocale(0,"");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	//случайный текст
//	random_device dev;
//	mt19937 generator(dev());
//	uniform_int_distribution<int> distribution(0,texts.size() -1);
//	string text = texts[distribution(generator)];
//
//	cout << "Введите данный текст как можно быстрее и аккуратнее, если это возможно.\nТекст полностю на русском языке:\n\n" << text << "\n\n";
//
//	//время начало
//	start = steady_clock::now();
//
//	//Ввод по символьно
//	textChar(text);
//
//	//время конец
//	finish = steady_clock::now();
//
//	//затраченное время
//	auto spent_time = duration_cast<milliseconds>(finish - start).count();
//
//	//Вывод
//	float clean = 100;
//	if (errors > 0) { 
//		//clean = 100 - round(errors * 100 / text.size()*100)/100;
//		clean = float(int(float(float((100 - (float(errors * 100) / float(text.size())))) * 100))) / 100;
//	}
//	cout << "\n\nЗатраченно время: " << spent_time / 1000 << "s\nОшибки: " << errors << "\nЧистописание: " << clean << "%\n";
//
//
//	int _;
//	cin >> _;
//	return 0;
//
//}