#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main()
{
	int sec, min, godz,reszta;
	cout << "podaj sekundy:";
	cin >> sec;
	godz = sec / 3600;
	min = sec/60-godz*60;
	reszta = sec-min*60+godz*3600;
			
	cout << "czas wynosi:"<<godz<<"h" << min <<"min" << reszta <<"sec" << endl;
	
		

	return 0;
