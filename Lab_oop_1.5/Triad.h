#pragma once
#include <string>
using namespace  std;

class Triad
{
private:
	double a, b, c;

public:
	double geta() const { return a; }
	double getb() const { return b; }
	double getc() const { return c; }

	void seta(double a) { this->a = a; }
	void setb(double b) { this->b = b; }
	void setc(double c) { this->c = c; }

	void Init(double a, double b, double c);
	void Display() const;
	void Read();

	double getSuma()const;
};