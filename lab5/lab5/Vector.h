#pragma once

using namespace std;

class Vector
{
public:
	int x = 0;
	int y = 0;
	int z = 0;

	void abs();
	void sum(Vector a, Vector b);
	void sub(Vector a, Vector b);

	Vector& operator= (const Vector& num);
	friend bool operator== (const Vector& num1, const Vector& num2);
	friend ostream& operator<< (ostream& out, const Vector& num);
	friend istream& operator>> (istream& in, Vector& num);
};