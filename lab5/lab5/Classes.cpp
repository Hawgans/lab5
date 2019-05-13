#include <iostream>
#include "Complex.h"
#include "Vector.h"

using namespace std;
//************************************ class Complex ************************************************

void Complex::abs()//функция подсчета модуля
{
	double rez;
	rez = sqrt(re * re + im * im);
	cout << "Модуль комплексного числа: " << rez << endl;
}

void Complex::Display()//функция вывода
{
	cout << re << " + (" << im << ")i" << endl;
}

Complex& Complex::operator= (const Complex & num)//перегрузка оператора присваивания
{
	re = num.re;
	im = num.im;
	return *this;
}

Complex& Complex::operator++ ()//перегрузка префиксного инкермента
{
	++re;
	++im;


	return *this;
}

Complex Complex::operator++ (int)//перегрузка постфиксного инкремента
{
	Complex old;
	old.re = re;
	old.im = im;

	re++;
	im++;
	return old;
}

Complex& Complex::operator-- ()//перегрузка префиксного декремента
{
	--re;
	--im;
	return *this;
}

Complex Complex::operator-- (int)//перегрузка постфиксного декремента
{
	Complex old;
	old.re = re;
	old.im = im;

	re--;
	im--;
	return old;
}

bool operator== (const Complex & num1, const Complex & num2)//перегрузка оператора сравнения
{
	return (num1.re == num2.re) && (num1.im == num2.im);
}

ostream & operator<< (ostream & out, const Complex & num)//перегрузка оператора вывода
{
	out << num.re << " + (" << num.im << ")i" << endl;
	return out;
}

istream& operator>> (istream & in, Complex & num)//перегрузка оператора ввода
{
	cout << "" << endl;
	in >> num.re;
	cout << "" << endl;
	in >> num.im;
	return in;
}

//****************************** class Vector *******************************************************

void Vector::abs()
{
	int rez;
	rez = x * x + y * y + z * z;
	cout << "Модуль вектора: " << rez << endl;
}

void Vector::sum(Vector a, Vector b)
{
	x = a.x + b.x;
	y = a.y + b.y;
	z = a.z + b.z;
	cout << "Координаты суммарного вектора: ( " << x << ", " << y << ", " << z << ")" << endl;
}

void Vector::sub(Vector a, Vector b)
{
	x = a.x - b.x;
	y = a.y - b.y;
	z = a.z - b.z;
	cout << "Координаты вектора (a-b): ( " << x << ", " << y << ", " << z << ")" << endl;
}

Vector& Vector::operator= (const Vector & num)
{
	x = num.x;
	y = num.y;
	z = num.z;
	return *this;
}

bool operator== (const Vector & num1, const Vector & num2)
{
	return (num1.x == num2.x) && (num1.y == num2.y) && (num1.z == num2.z);
}

ostream & operator<< (ostream & out, const Vector & num)
{
	out << "Координаты вектора: ( " << num.x << ", " << num.y << ", " << num.z << ")" << endl;
	return out;
}

istream& operator>> (istream& in, Vector& num)
{
	cout << "Введите координату x" << endl;
	in >> num.x;
	cout << "Введите координату y" << endl;
	in >> num.y;
	cout << "Введите координату z" << endl;
	in >> num.z;

	return in;
}