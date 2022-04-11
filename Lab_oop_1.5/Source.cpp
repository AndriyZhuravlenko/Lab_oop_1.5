#include<iostream>
#include "Triangle.h"
using namespace std;
int main()
{
	Triangle s;
	s.Read();
	s.Display();
	cout << "Area = " << s.getArea() << endl;
	cout << "Angel 1 = " << s.getAngel1() << endl;
	cout << "Angel 2 = " << s.getAngel2() << endl;
	cout << "Angel 3 = " << s.getAngel3() << endl;
	return 0;
}