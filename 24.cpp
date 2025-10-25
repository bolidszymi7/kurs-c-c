#include<iostream>      


using namespace std;



void wpisz_sume(int a,int b) {
    cout <<a+b <<endl;

}




int main() {
    int a, b;
    
    cout << "podaj a:";
    cin >> a;
    cout << "podaj b:";
    cin >> b;
    
    wpisz_sume(a, b);

    return 0;
}
