// lab_4_4.cpp :
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double r;
	double xStart;
	double xOver;
	double y;
	double step;

	cout << "r = "; cin >> r;
	cout << "xStart = "; cin >> xStart;
	cout << "xOver = "; cin >> xOver;
	cout << "step = "; cin >> step;

	cout << fixed;
	cout << "----------------------------------" << endl;
	cout << "|" << setw(10) << "xStart" << setw(5) << "|"
		<< setw(9) << "f" << setw(9) << "|" << endl;
	cout << "----------------------------------" << endl;

	while (xStart <= xOver)
	{
		if (xStart <= -r) {
			y = r;
		}
		else if (-r < xStart && xStart <= r) {
			y = r - sqrt(pow(r, 2) - pow(xStart, 2));
		}
		else if (r < xStart && xStart <= 6) {
			y = r + ((-3 - r) / (6 - r)) * (xStart - r);
		}
		else {
			y = xStart - 9;
		}

		cout << "|" << setw(10) << setprecision(2) << xStart << setw(5) << "|" << setw(11)
			<< setprecision(3) << y << setw(7) << "|" << endl;

		xStart = xStart + step;
	}
	cout << "----------------------------------" << endl;
}
