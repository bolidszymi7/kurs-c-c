#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double a, b, c, wynik;


	cout << "wpisz liczbe:" << endl;
	cin >> a;
	cout << "wpisz liczbe:" << endl;
	cin >> b;
	cout << "wpisz liczbe:" << endl;
	cin >> c;

	if (a > b && b > c)
		cout << "kolejnosc:" << a << "-"<< b << "-"<< c;
	else if (b > c&& c > a)
		cout << "kolejnosc:" << b << "-"<< c << "-"<< a;
	else if (c > a&& a > b)
		cout << "kolejnosc:" << c << "-"<< a << "-"<< b;
	else if (b > a && a > c)
		cout << "kolejnosc:" << b << "-"<< a << "-"<< c;
	else if (a > c && c > b)
		cout << "kolejnosc:" << a << "-"<< c << "-"<< b;
	else if (c > b && b > a)
		cout << "kolejnosc:" << c << "-"<< b << "-"<< a;
	
		return 0;

}
