#pragma once

using namespace std;

class Complex
{
public:
	int re = 0;
	int im = 0;

	void abs();//модуль комплексного числа
	void Display();//функция вывода

	Complex& operator= (const Complex& num);//перегрузка оператора присваивания
	Complex& operator++ ();//перегрузка оператора префиксного инкремента
	Complex operator++ (int);//пергрузка оператора постфиксного инкремента
	Complex& operator-- ();//перегрузка оператора перфиксного декремента 
	Complex operator-- (int);//перегрузка оператора постфиксного декремента
	friend bool operator==(const Complex& num1, const Complex& num2);//перегрузка оператора сравнения

	friend ostream& operator<<(ostream& out, const Complex& num);//перегрузка оператора вывода
	friend istream& operator>>(istream& in, Complex& num);//перегрузка оператора ввода
};