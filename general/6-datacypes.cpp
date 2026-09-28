#include<iostream>
#include<iomanip>

using namespace std;
int main (){
    int a=1;
    float b=1.5;
    
    char c='A';
    double d=30;
    bool e=true;
    double f=2.55555555555;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f;
    cout<<setprecision(6)<<f<<endl;
    return 0;
}