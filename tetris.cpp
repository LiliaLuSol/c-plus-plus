#include <iostream>

using namespace std;

void FigureDrop(int figure[][3], int x, int y, int rotation, int color) {

}

int main() {

	const int sizeA = 12;
	const int sizeB = 18;

	char field[sizeA][sizeB];

	const int Figure_I[][4] = { {1,1,1,1} };
	const int Figure_J[][3] = { {1,1,1},{0,0,1} };
	const int Figure_L[][3] = { {1,1,1},{1,0,0} };
	const int Figure_T[][3] = { {1,1,1},{0,1,0} };
	const int Figure_Z[][3] = { {1,1,0},{0,1,1} };
	const int Figure_S[][3] = { {0,1,1},{1,1,0} };
	const int Figure_O[][3] = { {1,1},{1,1} };

	for (int i = 0; i < sizeA; i++) {
		for (int j = 0; j < sizeB; j++) {
			field[i][j] = '.';
		}
	}
	
	for (int i = 0; i < sizeA; i++) {
		for (int j = 0; j < sizeB; j++) {
			cout << field[i][j];
		}
		cout << endl;
	}

	int _;
	cin >> _;
	return 0;
}