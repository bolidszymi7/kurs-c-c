#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int x, i, silnia;
	silnia = 1;

	cout << "podaj silnie:"
	cin >> x;

	for (int i = 2; i <= x; i++) {
		silnia = silnia * i;

	}
	cout << silnia << endl;

	return 0;
}
