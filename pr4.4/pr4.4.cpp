#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double x, y, endx, dx,R;
	cout << "start x = "; cin >> x;
	cout << "end x = "; cin >> endx;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << "--------------------------------" << endl;
	cout << "|" << setw(8) << "x" << setw(8) << "|" << setw(8) << "y" << setw(8) << "|" << endl;
	cout << "--------------------------------" << endl;
	while (x <= endx) {
		if (x <= 0)
			y = -0.5 * x;
		else if (x <= R)
			y = R - sqrt(R * R - x * x);
		else if (x > 2 * R)
			y = sqrt(R * R + (x - R) * (x - R));
		else
			y = -x / 6;
		cout << "|" << setw(8)  << setprecision(3) << x << setw(8) << "|" 
			<< setw(8) <<  setprecision(3) << y << setw(8) << "|" << endl;
		x += dx;
	}
	cout << "--------------------------------" << endl;
}