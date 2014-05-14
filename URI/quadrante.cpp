#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	double x, y;

	cin >> x;
	cin >> y;

	if ((x == 0) and (y == 0)) {
		cout << "Origem\n";
		return 0;
	}
	if (x == 0) {
		cout << "Eixo X\n";
		return 0;
	}
	if (y == 0) {
		cout << "Eixo Y\n";
		return 0;
	}

	if (y > 0) {
		if (x > 0)
			cout << "Q1\n";
		else if (x < 0)
			cout << "Q2\n";
	}
	else {
		if (x < 0)
			cout << "Q3\n";
		else if (x > 0)
			cout << "Q4\n";
	}

	return 0;
}
