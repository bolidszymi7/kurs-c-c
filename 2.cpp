#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main()
{

	double cena_benz, koszt,trasa,paliwo ;
	cout << "podaj cene paliwa:";
	cin >> cena_benz;
	cout << "trasa:";
	cin >> trasa;
	paliwo = 9;
	koszt = (cena_benz * paliwo) * (trasa / 100);
		cout << "koszt przejazdu" << koszt;

	return 0;


}
