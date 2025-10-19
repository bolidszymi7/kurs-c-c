#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	double wiek;
		cout << "podaj wiek:";
		cin >> wiek;
		if (wiek >= 18)
			cout << "masz prawo do glosowania";
		else cout << "nie masz prawa do glosowania";

     return 0;
}
