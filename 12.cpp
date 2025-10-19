#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int liczba;
	cout << "podaj liczbe:";
	cin >> liczba;
	if (liczba >= 100 && liczba <= 200)
		cout << "w zakresie";
	else(liczba < 100 && liczba>200);
	cout << "poza zakresem";
	
	return 0;
}
