int main() {
	int pok[3][3];
	

	cout << "podaj liczby:" << endl;
	for (int x = 0; x < 3; x++) {
		for (int a = 0; a < 3; a++) {
			cin >>pok[x][a];
		}
	}
	
		
	
	cout << "tablica:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << pok[i][0];
			cout << pok[i][1];
			cout << pok[i][2] << endl;
		}
 

	return 0;
}
