#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int liczba;
		cout << "podaj liczbe:";
		cin >> liczba;
		if (liczba > 0)
			cout << "liczba dodatnia";
		else if (liczba < 0)
			cout << "liczba ujemna";
		else if (liczba == 0)
			cout << "zero";


	return 0;
}
