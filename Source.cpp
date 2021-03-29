//Source.cpp
#include <iostream>
#include "Point.h"
using namespace std;
int main()
{
	Point A;
	A.SetX(2.5);
	A.SetY(-6);
	Point B(2.3,-6);
	cout << "Distance = " << A.Distance(B) << endl;
	Point A1;
	double x, y;
	cout << "Enter A(x)" << endl;
	cin >> x;
	A1.SetX(x);
	cout << "Enter A(y)" << endl;
	cin >> y;
	A1.SetY(y);
	Point B1(A1);
	B1++;
	cout << "Distance = " << A1.Distance(B1) << endl;
	return 0;

}