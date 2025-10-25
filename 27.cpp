#include<iostream>      


using namespace std;

int roznica(int a, int b) {
    
    return a-b;
}




int main() {
    int a, b;

    cout << "podaj liczbe:";
    cin >> a;
    cout << "podaj liczbe:";
    cin >> b;

    cout << roznica(a,b);

}
