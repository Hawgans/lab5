#include <iostream>
#include "Complex.h"
#include "Vector.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Complex test1;
	cin >> test1;
	cout << test1;
	cout << ++test1;
	cout << test1--;
	Complex test2;
	test2 = test1;
	cout << --test2;

	Vector test3;
	cin >> test3;
	cout << test3;

}