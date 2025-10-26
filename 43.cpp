#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>



using namespace std;


int main() {
	int tab1[5];
	int tab2[5];

	cout << "pierwsza tablica:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> tab1[i];
	
	}
	
		
	
	cout << "druga tablica:" << endl;
		for (int e = 0; e < 5; e++) {
			cin >> tab2[e];
		}

		bool takie_same = true;
		for (int y = 0; y < 5; y++) {
			if (tab1[y] != tab2[y]) {
				takie_same = false;
				break;
			}
		}
		if (takie_same) {
			cout << "sa takie same";
		}
		else
			cout << "nie sa takie same";


	return 0;
}
