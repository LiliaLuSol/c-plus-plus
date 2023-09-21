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
////������, ������� ������ � �����
//vector <string> texts = { "������ ��� �������!",
//					"���� ���� �� ����. ��� ��� ����� �����.",
//					"����� � ������ ����������� ��������.",
//					"������ ������ �� ����� �����... �� ����� ����� �������� �� ���� ������.",
//					"������������ �� ����. � ��� �����.(.)�.�" };
//int errors = 0;
//time_point <steady_clock> start, finish;
//
////������� ��� ����� ������ �� ��������
//void textChar(const string& text) {
//	for (char c : text) {
//		char v = _getch();
//		while (v != c) {
//			errors++;
//			//cout << "\n�������� ������! �������� ��� ���...\n";
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
//	//��������� �����
//	random_device dev;
//	mt19937 generator(dev());
//	uniform_int_distribution<int> distribution(0,texts.size() -1);
//	string text = texts[distribution(generator)];
//
//	cout << "������� ������ ����� ��� ����� ������� � ����������, ���� ��� ��������.\n����� �������� �� ������� �����:\n\n" << text << "\n\n";
//
//	//����� ������
//	start = steady_clock::now();
//
//	//���� �� ���������
//	textChar(text);
//
//	//����� �����
//	finish = steady_clock::now();
//
//	//����������� �����
//	auto spent_time = duration_cast<milliseconds>(finish - start).count();
//
//	//�����
//	float clean = 100;
//	if (errors > 0) { 
//		//clean = 100 - round(errors * 100 / text.size()*100)/100;
//		clean = float(int(float(float((100 - (float(errors * 100) / float(text.size())))) * 100))) / 100;
//	}
//	cout << "\n\n���������� �����: " << spent_time / 1000 << "s\n������: " << errors << "\n������������: " << clean << "%\n";
//
//
//	int _;
//	cin >> _;
//	return 0;
//
//}