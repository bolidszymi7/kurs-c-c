#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main() {
	char imie[20], nazw[20];
	cout << "podaj imie:" << endl;
	cin >> imie;
	cout << "podaj nazwisko:" << endl;
	cin >> nazw;

	cout << strcat(imie,nazw);

	return 0;
}
