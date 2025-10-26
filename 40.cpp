#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include<iomanip>

using namespace std;


int main(){
    int liczby[8];
    
    cout << "podaj 8 liczb:" << endl;
    for (int a = 0; a < 8; a++) {
        cin >> liczby[a];
    }
    
 
    cout << "liczby od tylu:" << endl;

    for (int i = 7; i >= 0; --i) {
        cout << liczby[i] << endl;
        
        
    }
  


    return 0;
}
