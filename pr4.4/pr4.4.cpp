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

	cout << "--------------------" << endl;
	while (x <= endx) {
		if (x <= 0)
			y = -0.5 * x;
		else if (x <= R)
			y = R - sqrt(R * R - x * x);
		else if (x > 2 * R)
			y = sqrt(R * R + (x - R) * (x - R));
		else
			y = -x / 6;
		cout << "|" << setw(5)  << setprecision(2) << x << setw(5) << "|" 
			<< setw(5) <<  setprecision(2) << y << setw(5) << "|" << endl;
		x += dx;
	}
	cout << "--------------------" << endl;
}