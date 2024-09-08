#include <iostream>
using namespace std;
int main()
{
	int x, y;
	char op;
	cout << "enter a nums:\n";
	cin >> x;
	cin >> y;
	cout << "select the operation pls: '+','-','*','/' \n";
	cin >> op;
	if (op == '+') {
		cout << x << "+" << y << "=" << x + y << endl;
	}
	else if (op == '-'&&x > y) {
		cout << x << "-" << y << "=" << x - y << endl;
	}
	else if (op == '-'&&y > x) {
		cout << y << "-" << x << "=" << y - x << endl;
	}
	else if (op == '*') {
		cout << x << "*" << y << "=" << x * y << endl;
	}
	else if (op == '/') {
		cout << x << "/" << y << "=" << x / y << endl;
	}
	else {
		cout << "invalid op\n";
	}

}

