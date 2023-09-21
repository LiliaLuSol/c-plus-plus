#include <iostream>
#include <conio.h>
#include <windows.h>
#include <thread>
using namespace std;

void hidecursor() {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}

int main() {
	setlocale(LC_ALL, "Russian");

	int sizeA, sizeB, x, y, v, score = 0, xpoint, ypoint, xbarrier, ybarrier, xbox, ybox, x1, y1, score1 = 0, comx, comy, d;
	bool status = false, status1 = false, win = true, win1 = true;
	string CONST CYAN = "\x1b[96m";
	string CONST MANGENTA = "\x1b[95m";
	string CONST WHITE = "\x1b[37m";
	string CONST GREEN = "\x1b[92m";
	string CONST RED = "\x1b[91m";
	string CONST YELLOW = "\x1b[93m";
	
	//�������� � ������
	hidecursor();
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cd;
	cd.X = 0;
	cd.Y = 0;

	cout << "����� ������ ����� AxB: ";
	cin >> sizeA >> sizeB;
	system("cls");
	sizeA+=2;
	sizeB+=2;

	x = 1;
	y = 1;

	x1 = sizeB-2;
	y1 = sizeA-2;

	comx = (sizeB - 1) / 2;
	comy = (sizeA - 1) / 2;

	xpoint = rand() % (sizeB - 1) + 1;
	ypoint = rand() % (sizeA - 1) + 1;

	//��������� ������������ ������ ��� ������������ ���������

	string** arr = new string * [sizeA];
	for (int i = 0; i < sizeA; i++) {
		arr[i] = new string[sizeB];
	}

	//������������� �����
	for (int i = 0; i < sizeB; i++) {
		arr[0][i] = "#";
		arr[sizeA - 1][i] = "#";
	}
	for (int i = 0; i < sizeA; i++) {
		arr[i][0] = "#";
		for (int j = 0; j < sizeB - 1; j++) {
			if (arr[i][j] != "#")
				arr[i][j] = " ";
		}
		arr[i][sizeB - 1] = "#";
	}
	//������
	arr[(sizeA - 1) / 2][sizeB - 1] = CYAN + "|" + WHITE;
	arr[(sizeA - 1) / 2][0] = RED + "|" + WHITE;

	//����������
	for (int i = 0; i != sizeA * sizeB / 6; i++) {
		xbarrier = rand() % (sizeB - 1) + 1;
		ybarrier = rand() % (sizeA - 1) + 1;
		while (arr[ybarrier][xbarrier] == "#" or arr[ybarrier][xbarrier] == YELLOW + "*" + WHITE or arr[ybarrier][xbarrier] == RED + "*" + WHITE or arr[ybarrier][xbarrier] == CYAN + "*" + WHITE or arr[ybarrier][xbarrier] == CYAN + "|" + WHITE or arr[ybarrier][xbarrier] == RED + "|" + WHITE or arr[ybarrier][xbarrier] == GREEN + "+" + WHITE) {
			xbarrier = rand() % (sizeB - 1) + 1;
			ybarrier = rand() % (sizeA - 1) + 1;
		}
		arr[ybarrier][xbarrier] = "#";
	}
	//����
	for (int i = 0; i != sizeA * sizeB / 20; i++) {
		xbox = rand() % (sizeB - 1) + 1;
		ybox = rand() % (sizeA - 1) + 1;
		while (arr[ybox][xbox] == "#" or arr[ybox][xbox] == YELLOW + "*" + WHITE or arr[ybox][xbox] == RED + "*" + WHITE  or arr[ybox][xbox] == CYAN + "*" + WHITE or arr[ybox][xbox] == MANGENTA + "o" + WHITE or arr[ybox][xbox] == CYAN + "|" + WHITE or arr[ybox][xbox] == RED + "|" + WHITE or arr[ybox][xbox] == GREEN + "+" + WHITE) {
			xbox = rand() % (sizeB - 1) + 1;
			ybox = rand() % (sizeA - 1) + 1;
		}
		arr[ybox][xbox] = GREEN + "+" + WHITE;
	}

	//��� ��� �����
	while (arr[ypoint][xpoint] == "#" or arr[ypoint][xpoint] == YELLOW + "*" + WHITE or arr[ypoint][xpoint] == CYAN + "*" + WHITE or arr[ypoint][xpoint] == RED + "*" + WHITE or arr[ypoint][xpoint] == CYAN + "|" + WHITE or arr[ypoint][xpoint] == RED + "|" + WHITE or arr[ypoint][xpoint] == GREEN + "+" + WHITE or arr[ypoint][xpoint] == RED + "/" + WHITE or arr[ypoint][xpoint] == CYAN + "\\" + WHITE) {
		xpoint = rand() % (sizeB - 1) + 1;
		ypoint = rand() % (sizeA - 1) + 1;
	}

	//����
	arr[(sizeA - 1) / 2][sizeB - 2] = " ";
	arr[(sizeA - 1) / 2][1] = " ";
	arr[2][1] = " ";
	arr[1][2] = " ";
	arr[3][1] = " ";
	arr[1][3] = " ";
	arr[sizeA - 3][sizeA - 2] = " ";
	arr[sizeA - 2][sizeA - 3] = " ";
	arr[sizeA - 4][sizeA - 2] = " ";
	arr[sizeA - 2][sizeA - 4] = " ";

	while (true) {

		//���
		if (status == false) {
			arr[y][x] = CYAN + "*" + WHITE;
		}
		if (status1 == false) {
			arr[y1][x1] = RED + "*" + WHITE;
		}
		arr[comy][comx] = YELLOW + "*" + WHITE;

		//�����
		arr[ypoint][xpoint] = MANGENTA + "o" + WHITE;

		//��������
		v = _getch();
		switch (v) {
			//^
		case 72:
			if (status1 == false) {
				if (arr[y1 - 1][x1] != "#") {
					if ((arr[y1 - 2][x1] == GREEN + "+" + WHITE and arr[y1 - 1][x1] == GREEN + "+" + WHITE) or (arr[y1 - 1][x1] == GREEN + "+" + WHITE and arr[y1 - 2][x1] == "#") or (arr[y1 - 1][x1] == GREEN + "+" + WHITE and arr[y1 - 2][x1] == MANGENTA + "o" + WHITE) or (arr[y1 - 2][x1] == CYAN + "*" + WHITE and arr[y1 - 1][x1] == GREEN + "+" + WHITE) or (arr[y1 - 2][x1] == YELLOW + "*" + WHITE and arr[y1 - 1][x1] == GREEN + "+" + WHITE)) {
						break;
					}
					else if (arr[y1 - 1][x1] == GREEN + "+" + WHITE and arr[y1 - 2][x1] != "#") {
						arr[y1][x1] = " ";
						arr[y1 - 1][x1] = RED + "*" + WHITE;
						arr[y1 - 2][x1] = GREEN + "+" + WHITE;
						y1 = y1 - 1;
						break;
					}
					arr[y1][x1] = " ";
					arr[y1 - 1][x1] = RED + "*" + WHITE;
					y1 = y1 - 1;
				}
			}
			else {
				arr[y1][x1] = " ";
			}
			break;
		case 119:
			if (status == false) {
				if (arr[y - 1][x] != "#") {
					if ((arr[y - 2][x] == GREEN + "+" + WHITE and arr[y - 1][x] == GREEN + "+" + WHITE) or (arr[y - 1][x] == GREEN + "+" + WHITE and arr[y - 2][x] == "#") or (arr[y - 1][x] == GREEN + "+" + WHITE and arr[y - 2][x] == MANGENTA + "o" + WHITE) or (arr[y - 2][x] == RED + "*" + WHITE and arr[y - 1][x] == GREEN + "+" + WHITE) or (arr[y - 2][x] == YELLOW + "*" + WHITE and arr[y - 1][x] == GREEN + "+" + WHITE)) {
						break;
					}
					else if (arr[y - 1][x] == GREEN + "+" + WHITE and arr[y - 2][x] != "#") {
						arr[y][x] = " ";
						arr[y - 1][x] = CYAN + "*" + WHITE;
						arr[y - 2][x] = GREEN + "+" + WHITE;
						y = y - 1;
						break;
					}
					arr[y][x] = " ";
					arr[y - 1][x] = CYAN + "*" + WHITE;
					y = y - 1;
				}
			}
			else {
				arr[y][x] = " ";
			}
			break;
			//<
		case 75:
			if (status1 == false) {
				if (arr[y1][x1 - 1] != "#") {
					if ((arr[y1][x1 - 2] == GREEN + "+" + WHITE and arr[y1][x1 - 1] == GREEN + "+" + WHITE) or (arr[y1][x1 - 1] == GREEN + "+" + WHITE and arr[y1][x1 - 2] == "#") or (arr[y1][x1 - 1] == GREEN + "+" + WHITE and arr[y1][x1 - 2] == MANGENTA + "o" + WHITE) or arr[y1][x1 - 1] == RED + "|" + WHITE or arr[y1][x1 - 1] == CYAN + "|" + WHITE or (arr[y1][x1 - 1] == GREEN + "+" + WHITE and arr[y1][x1 - 2] == CYAN + "|" + WHITE) or (arr[y1][x1 - 1] == GREEN + "+" + WHITE and arr[y1][x1 - 2] == RED + "|" + WHITE) or (arr[y1][x1 - 2] == CYAN + "*" + WHITE and arr[y1][x1 - 1] == GREEN + "+" + WHITE) or (arr[y1][x1 - 2] == YELLOW + "*" + WHITE and arr[y1][x1 - 1] == GREEN + "+" + WHITE) or (arr[y1][x1 - 1] == GREEN + "+" + WHITE and arr[y1][x1 - 2] == RED + "/" + WHITE)) {
						break;
					}
					else if (arr[y1][x1 - 1] == GREEN + "+" + WHITE and arr[y1][x1 - 2] != "#") {
						arr[y1][x1] = " ";
						arr[y1][x1 - 1] = RED + "*" + WHITE;
						arr[y1][x1 - 2] = GREEN + "+" + WHITE;
						x1 = x1 - 1;
						break;
					}
					arr[y1][x1] = " ";
					arr[y1][x1 - 1] = RED + "*" + WHITE;
					x1 = x1 - 1;
				}
			}
			else {
				arr[y1][x1] = " ";
			}
			break;
		case 97:
			if (status == false) {
				if (arr[y][x - 1] != "#") {
					if ((arr[y][x - 2] == GREEN + "+" + WHITE and arr[y][x - 1] == GREEN + "+" + WHITE) or (arr[y][x - 1] == GREEN + "+" + WHITE and arr[y][x - 2] == "#") or (arr[y][x - 1] == GREEN + "+" + WHITE and arr[y][x - 2] == MANGENTA + "o" + WHITE) or arr[y][x - 1] == RED + "|" + WHITE or arr[y][x - 1] == CYAN + "|" + WHITE or (arr[y][x - 1] == GREEN + "+" + WHITE and arr[y][x - 2] == CYAN + "|" + WHITE) or (arr[y][x - 1] == GREEN + "+" + WHITE and arr[y][x - 2] == RED + "|" + WHITE) or (arr[y][x - 2] == RED + "*" + WHITE and arr[y][x - 1] == GREEN + "+" + WHITE) or arr[y][x - 1] == RED + "/" + WHITE or (arr[y][x - 2] == YELLOW + "*" + WHITE and arr[y][x - 1] == GREEN + "+" + WHITE) or (arr[y][x - 1] == GREEN + "+" + WHITE and arr[y][x - 2] == RED + "/" + WHITE)) {
						break;
					}
					else if (arr[y][x - 1] == GREEN + "+" + WHITE and arr[y][x - 2] != "#") {
						arr[y][x] = " ";
						arr[y][x - 1] = CYAN + "*" + WHITE;
						arr[y][x - 2] = GREEN + "+" + WHITE;
						x = x - 1;
						break;
					}
					arr[y][x] = " ";
					arr[y][x - 1] = CYAN + "*" + WHITE;
					x = x - 1;
				}
			}
			else {
				arr[y][x] = " ";
			}
			break;
			//>
		case 77:
			if (status1 == false) {
				if (arr[y1][x1 + 1] != "#") {
					if ((arr[y1][x1 + 2] == GREEN + "+" + WHITE and arr[y1][x1 + 1] == GREEN + "+" + WHITE) or (arr[y1][x1 + 1] == GREEN + "+" + WHITE and arr[y1][x1 + 2] == "#") or (arr[y1][x1 + 1] == GREEN + "+" + WHITE and arr[y1][x1 + 2] == MANGENTA + "o" + WHITE) or arr[y1][x1 + 1] == RED + "|" + WHITE or arr[y1][x1 + 1] == CYAN + "|" + WHITE or (arr[y1][x1 + 1] == GREEN + "+" + WHITE and arr[y1][x1 + 2] == RED + "|" + WHITE) or (arr[y1][x1 + 1] == GREEN + "+" + WHITE and arr[y1][x1 + 2] == CYAN + "|" + WHITE) or (arr[y1][x1 + 2] == CYAN + "*" + WHITE and arr[y1][x1 + 1] == GREEN + "+" + WHITE) or arr[y1][x1 + 1] == CYAN + "\\" + WHITE or (arr[y1][x1 + 2] == YELLOW + "*" + WHITE and arr[y1][x1 + 1] == GREEN + "+" + WHITE) or (arr[y1][x1 + 1] == GREEN + "+" + WHITE and arr[y1][x1 + 2] == CYAN + "\\" + WHITE)) {
						break;
					}
					else if (arr[y1][x1 + 1] == GREEN + "+" + WHITE and arr[y1][x1 + 2] != "#") {
						arr[y1][x1] = " ";
						arr[y1][x1 + 1] = RED + "*" + WHITE;
						arr[y1][x1 + 2] = GREEN + "+" + WHITE;
						x1 = x1 + 1;
						break;
					}
					arr[y1][x1] = " ";
					arr[y1][x1 + 1] = RED + "*" + WHITE;
					x1 = x1 + 1;
				}
			}
			else {
				arr[y1][x1] = " ";
			}
			break;
		case 100:
			if (status == false) {
				if (arr[y][x + 1] != "#") {
					if ((arr[y][x + 2] == GREEN + "+" + WHITE and arr[y][x + 1] == GREEN + "+" + WHITE) or (arr[y][x + 1] == GREEN + "+" + WHITE and arr[y][x + 2] == "#") or (arr[y][x + 1] == GREEN + "+" + WHITE and arr[y][x + 2] == MANGENTA + "o" + WHITE) or arr[y][x + 1] == CYAN + "|" + WHITE or arr[y][x + 1] == RED + "|" + WHITE or (arr[y][x + 1] == GREEN + "+" + WHITE and arr[y][x + 2] == RED + "|" + WHITE) or (arr[y][x + 1] == GREEN + "+" + WHITE and arr[y][x + 2] == CYAN + "|" + WHITE) or (arr[y][x + 2] == RED + "*" + WHITE and arr[y][x + 1] == GREEN + "+" + WHITE) or (arr[y][x + 2] == YELLOW + "*" + WHITE and arr[y][x + 1] == GREEN + "+" + WHITE) or (arr[y][x + 1] == GREEN + "+" + WHITE and arr[y][x + 2] == CYAN + "\\" + WHITE)) {
						break;
					}
					else if (arr[y][x + 1] == GREEN + "+" + WHITE and arr[y][x + 2] != "#") {
						arr[y][x] = " ";
						arr[y][x + 1] = CYAN + "*" + WHITE;
						arr[y][x + 2] = GREEN + "+" + WHITE;
						x = x + 1;
						break;
					}
					arr[y][x] = " ";
					arr[y][x + 1] = CYAN + "*" + WHITE;
					x = x + 1;
				}
			}
			else {
				arr[y][x] = " ";
			}
			break;
			//v
		case 80:
			if (status1 == false) {
				if (arr[y1 + 1][x1] != "#") {
					if ((arr[y1 + 2][x1] == GREEN + "+" + WHITE and arr[y1 + 1][x1] == GREEN + "+" + WHITE) or (arr[y1 + 1][x1] == GREEN + "+" + WHITE and arr[y1 + 2][x1] == "#") or (arr[y1 + 1][x1] == GREEN + "+" + WHITE and arr[y1 + 2][x1] == MANGENTA + "o" + WHITE) or (arr[y1 + 2][x1] == CYAN + "*" + WHITE and arr[y1 + 1][x1] == GREEN + "+" + WHITE) or (arr[y1 + 2][x1] == YELLOW + "*" + WHITE and arr[y1 + 1][x1] == GREEN + "+" + WHITE)) {
						break;
					}
					else if (arr[y1 + 1][x1] == GREEN + "+" + WHITE and arr[y1 + 2][x1] != "#") {
						arr[y1][x1] = " ";
						arr[y1 + 1][x1] = RED + "*" + WHITE;
						arr[y1 + 2][x1] = GREEN + "+" + WHITE;
						y1 = y1 + 1;
						break;
					}
					arr[y1][x1] = " ";
					arr[y1 + 1][x1] = RED + "*" + WHITE;
					y1 = y1 + 1;
				}
			}
			else {
				arr[y1][x1] = " ";
			}
			break;
		case 115:
			if (status == false) {
				if (arr[y + 1][x] != "#") {
					if ((arr[y + 2][x] == GREEN + "+" + WHITE and arr[y + 1][x] == GREEN + "+" + WHITE) or (arr[y + 1][x] == GREEN + "+" + WHITE and arr[y + 2][x] == "#") or (arr[y + 1][x] == GREEN + "+" + WHITE and arr[y + 2][x] == MANGENTA + "o" + WHITE) or (arr[y + 2][x] == RED + "*" + WHITE and arr[y + 1][x] == GREEN + "+" + WHITE) or (arr[y + 2][x] == YELLOW + "*" + WHITE and arr[y + 1][x] == GREEN + "+" + WHITE)) {
						break;
					}
					else if (arr[y + 1][x] == GREEN + "+" + WHITE and arr[y + 2][x] != "#") {
						arr[y][x] = " ";
						arr[y + 1][x] = CYAN + "*" + WHITE;
						arr[y + 2][x] = GREEN + "+" + WHITE;
						y = y + 1;
						break;
					}
					arr[y][x] = " ";
					arr[y + 1][x] = CYAN + "*" + WHITE;
					y = y + 1;
				}
			}
			else {
				arr[y][x] = " ";
			}
			break;
		}

		// �������� ����������
		d = rand() % 4;
		switch (d) {
		case 0: // < 
			if (arr[comy][comx - 1] != "#") {
				if ((arr[comy][comx - 2] == GREEN + "+" + WHITE and arr[comy][comx - 1] == GREEN + "+" + WHITE) or (arr[comy][comx - 1] == GREEN + "+" + WHITE and arr[comy][comx - 2] == "#") or (arr[comy][comx - 1] == GREEN + "+" + WHITE and arr[comy][comx - 2] == MANGENTA + "o" + WHITE) or arr[comy][comx - 1] == RED + "|" + WHITE or arr[comy][comx - 1] == CYAN + "|" + WHITE or (arr[comy][comx - 1] == GREEN + "+" + WHITE and arr[comy][comx - 2] == CYAN + "|" + WHITE) or (arr[comy][comx - 1] == GREEN + "+" + WHITE and arr[comy][comx - 2] == RED + "|" + WHITE) or (arr[comy][comx - 2] == RED + "*" + WHITE and arr[comy][comx - 1] == GREEN + "+" + WHITE) or arr[comy][comx - 1] == RED + "/" + WHITE or (arr[comy][comx - 2] == CYAN + "*" + WHITE and arr[comy][comx - 1] == GREEN + "+" + WHITE) or (arr[comy][comx - 1] == GREEN + "+" + WHITE and arr[comy][comy - 2] == RED + "/" + WHITE)) {
					break;
				}
				else if (arr[comy][comx - 1] == GREEN + "+" + WHITE and arr[comy][comx - 2] != "#") {
					arr[comy][comx] = " ";
					arr[comy][comx - 1] = YELLOW + "*" + WHITE;
					arr[comy][comx - 2] = GREEN + "+" + WHITE;
					comx = comx - 1;
					break;
				}
				arr[comy][comx] = " ";
				arr[comy][comx - 1] = YELLOW + "*" + WHITE;
				comx = comx - 1;
			}
			break;
		case 1: // >
			if (arr[comy][comx + 1] != "#") {
				if ((arr[comy][comx + 2] == GREEN + "+" + WHITE and arr[comy][comx + 1] == GREEN + "+" + WHITE) or (arr[comy][comx + 1] == GREEN + "+" + WHITE and arr[comy][comx + 2] == "#") or (arr[comy][comx + 1] == GREEN + "+" + WHITE and arr[comy][comx + 2] == MANGENTA + "o" + WHITE) or arr[comy][comx + 1] == CYAN + "|" + WHITE or arr[comy][comx + 1] == RED + "|" + WHITE or (arr[comy][comx + 1] == GREEN + "+" + WHITE and arr[comy][comx + 2] == RED + "|" + WHITE) or (arr[comy][comx + 1] == GREEN + "+" + WHITE and arr[comy][comx + 2] == CYAN + "|" + WHITE) or (arr[comy][comx + 2] == RED + "*" + WHITE and arr[comy][comx + 1] == GREEN + "+" + WHITE) or (arr[comy][comx + 2] == CYAN + "*" + WHITE and arr[comy][comx + 1] == GREEN + "+" + WHITE) or (arr[comy][comx - 1] == GREEN + "+" + WHITE and arr[comy][comy - 2] == CYAN + "\\" + WHITE)) {
					break;
				}
				else if (arr[comy][comx + 1] == GREEN + "+" + WHITE and arr[comy][comx + 2] != "#") {
					arr[comy][comx] = " ";
					arr[comy][comx + 1] = YELLOW + "*" + WHITE;
					arr[comy][comx + 2] = GREEN + "+" + WHITE;
					comx = comx + 1;
					break;
				}
				arr[comy][comx] = " ";
				arr[comy][comx + 1] = YELLOW + "*" + WHITE;
				comx = comx + 1;
			}
			break;
		case 2: // ^
			if (arr[comy - 1][comx] != "#") {
				if ((arr[comy - 2][comx] == GREEN + "+" + WHITE and arr[comy - 1][comx] == GREEN + "+" + WHITE) or (arr[comy - 1][comx] == GREEN + "+" + WHITE and arr[comy - 2][comx] == "#") or (arr[comy - 1][comx] == GREEN + "+" + WHITE and arr[comy - 2][comx] == MANGENTA + "o" + WHITE) or (arr[comy - 2][comx] == CYAN + "*" + WHITE and arr[comy - 1][comx] == GREEN + "+" + WHITE) or (arr[comy - 2][comx] == RED + "*" + WHITE and arr[comy - 1][comx] == GREEN + "+" + WHITE)) {
					break;
				}
				else if (arr[comy - 1][comx] == GREEN + "+" + WHITE and arr[comy - 2][comx] != "#") {
					arr[comy][comx] = " ";
					arr[comy - 1][comx] = YELLOW + "*" + WHITE;
					arr[comy - 2][comx] = GREEN + "+" + WHITE;
					comy = comy - 1;
					break;
				}
				arr[comy][comx] = " ";
				arr[comy - 1][comx] = YELLOW + "*" + WHITE;
				comy = comy - 1;
			}
			break;
		case 3: // v
			if (arr[comy + 1][comx] != "#") {
				if ((arr[comy + 2][comx] == GREEN + "+" + WHITE and arr[comy + 1][comx] == GREEN + "+" + WHITE) or (arr[comy + 1][comx] == GREEN + "+" + WHITE and arr[comy + 2][comx] == "#") or (arr[comy + 1][comx] == GREEN + "+" + WHITE and arr[comy + 2][comx] == MANGENTA + "o" + WHITE) or (arr[comy + 2][comx] == RED + "*" + WHITE and arr[comy + 1][comx] == GREEN + "+" + WHITE) or (arr[comy + 2][comx] == RED + "*" + WHITE and arr[comy + 1][comx] == GREEN + "+" + WHITE)) {
					break;
				}
				else if (arr[comy + 1][comx] == GREEN + "+" + WHITE and arr[comy + 2][comx] != "#") {
					arr[comy][comx] = " ";
					arr[comy + 1][comx] = YELLOW + "*" + WHITE;
					arr[comy + 2][comx] = GREEN + "+" + WHITE;
					comy = comy + 1;
					break;
				}
				arr[comy][comx] = " ";
				arr[comy + 1][comx] = YELLOW + "*" + WHITE;
				comy = comy + 1;
			}
			break;
		}

		//������
		if (arr[y][x] == arr[ypoint][xpoint]) {
			score++;
			//������� ������
			if (score == 5) {
				arr[(sizeA - 1) / 2][sizeB - 1] = CYAN + "\\" + WHITE;
			}
			if (status == false) {
				arr[ypoint][xpoint] = CYAN + "*" + WHITE;
			}
			xpoint = rand() % (sizeB - 1) + 1;
			ypoint = rand() % (sizeA - 1) + 1;
			while (arr[ypoint][xpoint] == "#" or arr[ypoint][xpoint] == YELLOW + "*" + WHITE or arr[ypoint][xpoint] == CYAN + "*" + WHITE or arr[ypoint][xpoint] == RED + "*" + WHITE or arr[ypoint][xpoint] == CYAN + "|" + WHITE or arr[ypoint][xpoint] == RED + "|" + WHITE or arr[ypoint][xpoint] == GREEN + "+" + WHITE or arr[ypoint][xpoint] == RED + "/" + WHITE or arr[ypoint][xpoint] == CYAN + "\\" + WHITE) {
				xpoint = rand() % (sizeB - 1) + 1;
				ypoint = rand() % (sizeA - 1) + 1;
			}
			arr[ypoint][xpoint] = MANGENTA + "o" + WHITE;
		}
		if (arr[y1][x1] == arr[ypoint][xpoint]) {
			score1++;
			//������� ������
			if (score1 == 5) {
				arr[(sizeA - 1) / 2][0] = RED + "/" + WHITE;
			}
			if (status1 == false) {
				arr[ypoint][xpoint] = RED + "*" + WHITE;
			}
			xpoint = rand() % (sizeB - 1) + 1;
			ypoint = rand() % (sizeA - 1) + 1;
			while (arr[ypoint][xpoint] == "#" or arr[ypoint][xpoint] == YELLOW + "*" + WHITE or arr[ypoint][xpoint] == CYAN + "*" + WHITE or arr[ypoint][xpoint] == RED + "*" + WHITE or arr[ypoint][xpoint] == CYAN + "|" + WHITE or arr[ypoint][xpoint] == RED + "|" + WHITE or arr[ypoint][xpoint] == GREEN + "+" + WHITE or arr[ypoint][xpoint] == RED + "/" + WHITE or arr[ypoint][xpoint] == CYAN + "\\" + WHITE) {
				xpoint = rand() % (sizeB - 1) + 1;
				ypoint = rand() % (sizeA - 1) + 1;
			}
			arr[ypoint][xpoint] = MANGENTA + "o" + WHITE;
		}

		SetConsoleCursorPosition(hd, cd);
		//����� �������
		for (int i = 0; i < sizeA; i++) {
			for (int j = 0; j < sizeB; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl << "���� \x1b[96m������ 1\x1b[37m: " << score << "\t���� \x1b[91m������ 2\x1b[37m: " << score1;
		hidecursor();

		if (arr[comy][comx] == arr[y][x] or (status and win)) {
			cout << "\n\n\x1b[96m����� 1\x1b[37m ��� ������ ��";
			status = true;
		}
		if (arr[comy][comx] == arr[y1][x1] or (status1 and win1)) {
			cout << "\n\n\x1b[91m����� 2\x1b[37m ��� ������ ��";
			status1 = true;
		}
		if (status and status1 and win and win1) {
			cout << "\n\n\x1b[93m(GAME OVER)\x1b[37m";
			break;
		}
		if (arr[(sizeA - 1) / 2][sizeB - 1] == CYAN + "*" + WHITE) {
			cout << "\n\n\x1b[96m����� 1\x1b[37m ������, ���� ������������!";
			status = true;
			win = false;
			arr[(sizeA - 1) / 2][sizeB - 1] = CYAN + "*" + WHITE;
		}
		if (arr[(sizeA - 1) / 2][0] == RED + "*" + WHITE) {
			cout << "\n\n\x1b[91m����� 2\x1b[37m ������, ���� ������������!";
			status1 = true;
			win1 = false;
			arr[(sizeA - 1) / 2][0] = RED + "*" + WHITE;
		}
		if (status == true and win == false and status1 == true and win1 == false) {
			cout << "\n\n\x1b[93m(��� ��������)\x1b[37m";
			break;
		}
	}
	//������������ ������ - ��� ��� ������
	for (int i = 0; i < sizeA; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	int _;
	cin >> _;
	return 0;
}