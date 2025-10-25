#include<iostream>      


using namespace std;

float srednia(int a,int b){
    
    return (a+b)/2;
}

int main() {
     int a,b;
     cout<<"podaj liczbe:";
     cin>>a;
     cout<<"podaj liczbe:";
     cin>>b;
     cout<<srednia(a,b);
     return 0;
}
