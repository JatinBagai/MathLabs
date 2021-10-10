#include <iostream>
using namespace std;

float func(float x, float y)
{
	return (x + y + x * y);
}

int main()
{
    float x0, y0;
	cout << "Enter the initial conditions: ";
	cin >> x0 >> y0;
	float h;
	cout << "Enter the step size: ";
	cin >> h;
	float x;
	cout << "Enter the point for approximation: ";
	cin >> x;
	float temp = -0;
	while (x0 < x) {
		temp = y0;
		y0 = y0 + h * func(x0, y0);
		x0 = x0 + h;
	}
	cout << "Approximate solution at x = "
		<< x << " is " << y0 << endl;
	return 0;
}
