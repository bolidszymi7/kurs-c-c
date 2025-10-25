#include<iostream>      


using namespace std;



void silnias(int n) {
   
    
    
    long long silnia = 1;
    for (int i = n; i > 1; i--)
        silnia *= i;
    cout << n << "! = " << silnia << endl;
  
    
    cout <<n <<endl;
}




int main() {
    int a,silnia;
    


    cout << "podaj a:";
    cin >> a;
    


    
    silnias(a);

    return 0;
}
