int main() {
	int pok[4][4];
	int suma=0;

	cout << "podaj liczby:" << endl;
	for (int x = 0; x < 4; x++) {
		for (int a = 0; a < 4; a++) {
			cin >>pok[x][a];
			suma = suma + pok[x][a];
		
		}

	}
	
		
	
	cout << "tablica:" << endl;
		for (int i = 0; i < 4; i++) {
			cout << pok[i][0]<<" ";
			cout << pok[i][1]<<" ";
			cout << pok[i][2]<<" ";
			cout << pok[i][3]<<" "<< endl;
		}
		cout << "suma:" << suma;



	return 0;
}
