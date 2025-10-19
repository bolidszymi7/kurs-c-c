#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double wynik;
	cout << "podaj swoj wynik (0-100):";
	cin >> wynik;
	if (wynik <= 100 && wynik>=90)
		cout << "ocena: celujacy";
	else if (wynik <= 89 && wynik>=75)
		cout << "ocena: bardzo dobry";
	else if (wynik <= 74 && wynik>=50)
		cout << "ocena: dobry";
	else if (wynik < 50)
		cout << "ocena: niedostateczny";
     return 0;
}
