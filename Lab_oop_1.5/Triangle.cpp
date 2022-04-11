#include "Triangle.h"
#include <iostream>
using namespace std;
void Triangle::Init(double a, double b, double c)
{
	triad.Init(a, b, c);
}
void Triangle::Display() const
{
	triad.Display();
}
bool Triangle::seta(double value)
{
	if (value > 0)
	{
		triad.seta(value);
		return true;
	}
	else
	{
		triad.seta(0);
		return false;
	}
}
bool Triangle::setb(double value)
{
	if (value > 0)
	{
		triad.setb(value);
		return true;
	}
	else
	{
		triad.setb(0);
		return false;
	}
}

bool Triangle::setc(double value)
{
	if (value > 0)
	{
		triad.setc(value);
		return true;
	}
	else
	{
		triad.setc(0);
		return false;
	}
}

void Triangle::Read()
{
	Triad m;
	m.Read();
	Init(m);
}