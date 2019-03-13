#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double mass, density;
	cout << "Input mass:" <<endl;
	cin >> mass;
	cout << "mass = " << mass << "g" <<endl;
	cout << "Input density: " << endl;
	cin>> density;
	cout << "density =" << density << "g/cm^3" << endl;
	cout << "volume of the object = " << setprecision(2) << fixed << mass/(4*density) << "cm^3" << endl;
	_getch();
	return 0;
}