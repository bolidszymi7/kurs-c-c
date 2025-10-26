#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>

using namespace std;


int main(){
    int liczby[10];
    int szukana;
    int licznik=0;
    cout << "podaj 10 liczb:" << endl;
    for (int a = 0; a < 10; a++) {
        cin >> liczby[a];
    }
    cout << "podaj liczbe:" << endl;
    cin >> szukana;
    for (int i = 0; i < 10; ++i) {
        
        if (szukana == liczby[i]) {
            licznik = licznik + 1;
        }
    }   
  cout << "liczba wystepuje:"<<licznik <<" razy" ;
   return 0;
}
