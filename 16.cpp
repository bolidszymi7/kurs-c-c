#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int licz,li=0;
	
	for (int licz =1 ;licz <=100 ; licz++) {
		cout << licz << endl;
		
		li = licz + li;
		
	}

	cout << li;

	return 0;
}
