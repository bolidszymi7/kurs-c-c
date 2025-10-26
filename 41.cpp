#include <iostream>
using namespace std;

int main() {
    int liczby[10];

    cout << "Podaj 10 liczb:" << endl;
    for (int a = 0; a < 10; a++) {
        cin >> liczby[a];
    }

    cout << "Liczby parzyste:" << endl;
    for (int i = 0; i < 10; i++) {
        if (liczby[i] % 2 == 0)
            cout << liczby[i] << " ";
       
    }
    cout << " "<<endl;
    cout << "Liczby nieparzyste:" << endl;
    for (int i = 0; i < 10; i++) {
        if (liczby[i] % 2 != 0)
            cout << liczby[i] << " ";
    }

    cout << endl;
    return 0;
}
