#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");


	int a, b;
	char c;
	cout << "����� �������� �� ������ ����������?\n";
	cin >> c;


if (c == '%') {

	int d, e;
	cout << "\n������� 1� �����: ";
	cin >> d;
	cout << endl << "������� 2� �����: ";
	cin >> e;

	if (d == -0) {
		d = 0;
	}
	else if (d == +0) {
		d = 0;
	};

	if (e == -0) {
		e = 0;
	}
	else if (e == +0) {
		e = 0;
	};

	if (d < 0 and e < 0) {
		cout << endl << "(" << d << ") + (" << e << ") = " << d % e;
	}
	else if (e < 0) {
		cout << endl <<d  << " + (" << e << ") = " << d % e;
	}
	else if (d < 0) {
		cout << endl << "(" << d << ") + " << e << " = " << d % e;
	}
	else {
		cout << endl << d << " + " << e << " = " << d % e;
	};
}

else {
	double a, b, r;
	cout << "\n������� 1� �����: ";
	cin >> a;
	cout << endl << "������� 2� �����: ";
	cin >> b;

	if (c == '+') {

		if (a == -0) {
			a = 0;
		}
		else if (a == +0) {
			a = 0;
		};

		if (b == -0) {
			b = 0;
		}
		else if (b == +0) {
			b = 0;
		};

		r = a + b;
		if (r == -0) {
			r = 0;
		};

		if (a < 0 and b < 0) {
			cout << endl << "(" << a << ") + (" << b << ") = " << r;
		}
		else if (b < 0) {
			cout << endl  << a << " + (" << b << ") = " << r;
		}
		else if (a < 0) {
			cout << endl << "(" << a << ") + " << b << " = " << r;
		}
		else {
			cout << endl << a << " + " << b << " = " << r;
		}
	}
	else if (c == '-') {

		if (a == -0) {
			a = 0;
		}
		else if (a == +0) {
			a = 0;
		};

		if (b == -0) {
			b = 0;
		}
		else if (b == +0) {
			b = 0;
		};

		r = a - b;
		if (r == -0) {
			r = 0;
		};
		if (a < 0 and b < 0) {
			cout << endl << "(" << a << ") - (" << b << ") = " << r;
		}
		else if (b < 0) {
			cout << endl << a << " - (" << b << ") = " << r;
		}
		else if (a < 0) {
			cout << endl << "(" << a << ") - " << b << " = " << r;
		}
		else {
			cout << endl << a << " - " << b << " = " << r;
		}
	}
	else if (c == '/') {
		if (a == -0) {
			a = 0;
		}
		else if (a == +0) {
			a = 0;
		};

		if (b == -0) {
			b = 0;
		}
		else if (b == +0) {
			b = 0;
		};
		r = a / b;
		if (r == -0) {
			r = 0;
		};
		if (b == 0) {
			cout << endl << "�� ���� ������ ������!";
		}
		else {
			if (a < 0 and b < 0) {
				cout << endl << "(" << a << ") / (" << b << ") = " << r;
			}
			else if (b < 0) {
				cout << endl << a << " / (" << b << ") = " << r;
			}
			else if (a < 0) {
				cout << endl << "(" << a << ") / " << b << " = " << r;
			}
			else {
				cout << endl << a << " / " << b << " = " << r;
			};
		}
	}
	else if (c == '*') {
	if (a == -0) {
		a = 0;
	}
	else if (a == +0) {
		a = 0;
	};

	if (b == -0) {
		b = 0;
	}
	else if (b == +0) {
		b = 0;
	};
		r = a * b;
		if (r == -0) {
			r = 0;
		};
		if (a < 0 and b < 0) {
			cout << endl << "(" << a << ") * (" << b << ") = " << r;
		}
		else if (b < 0) {
			cout << endl << a << " * (" << b << ") = " << r;
		}
		else if (a < 0) {
			cout << endl << "(" << a << ") * " << b << " = " << r;
		}
		else {
			cout << endl << a << " * " << b << " = " << r;
		};
	}
	else {
		cout << endl << "� ����� ������� �� ����, ����!!";
	};
}


int _;
cin >> _;


return 0;
}


