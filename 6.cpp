

cout << "podaj dlugosc sciany:";
	cin >> lenght2;
	cout << "podaj wysokośc sciany:";
	cin >> height;
	cout << "podaj ile metrów kwadratowych mozna pomalowac 1m farby:";
	cin >> paint_p;
	paint_l = (lenght2 * height) / paint_p;
	cout<<"do pomalowania sciany potrzeba : " << paint_l << "litrów farby" << endl;
	return 0;
