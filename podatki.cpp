#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main()
{
	double dochod, podatek;
	cout << "wpisz swoj dochod:";
	cin >> dochod;
	
	if (dochod <= 30000)
	 podatek = dochod * 0.12;
	else
	 podatek = 30000 * 0.12 - (dochod - 30000) * 0.32;
		
	cout << "twoj podatek:"  <<podatek<< endl;

	return 0;






}
