#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main()
{

	double dyst,czas,predk,bok_a,bok_b;
    cout<< "podaj dystans(kilometry):";
	cin>> dyst;
	cout<< "podaj czas podrozy(godziny):";
	cin>> czas;
	predk= (dyst / czas);
	cout<< "srednia predkosc:" << predk<<endl;

	cout<< "podaj dlugosc boku a";
