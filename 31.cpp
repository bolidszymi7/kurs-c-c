#include<iostream>      


using namespace std;

int wart_bezw(int a) {
    if (a < 0) {
        int wart = a * -1;
         return wart;
    }

    else {
        int wart = a * 1;
        return wart;
    }
    
  
}





int main() {
    int wart;


    cout << "podaj liczbe: ";
    cin >> wart;

    cout << wart_bezw(wart);

    return 0;
}
