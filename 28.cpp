#include<iostream>      


using namespace std;

int iloczyn (int a,int b){
    
    return a*b;
}

int main() {
     int a,b;
     cout<<"podaj liczbe:";
     cin>>a;
     cout<<"podaj liczbe:";
     cin>>b;
     cout<<iloczyn(a,b);
     return 0;
}
