#include<iostream>      


using namespace std;

bool czy_parzytsa(int n) {
    if (n % 2 == 0)
        return true;
    else
        return false;
}


int main() {
    int n;
    cout << "podaj liczbe:";
    cin >> n;
    cout << czy_parzytsa(n);
    return 0;
}

