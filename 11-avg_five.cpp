//take imput and print over  four decimal places
#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    int a,b,c,d,e;
    int sum;
    float avg;
    cout<<"enter the number"<<endl;
    cin>>a>>b>>c>>d>>e;
    sum=(a+b+c+d+e);
    cout<<"the sum is :"<<endl;
    cout<<sum<<endl;
    avg=sum/5;
    cout<<"avg :"<<fixed<<setprecision(4)<<avg<<endl;




return 0;
}

//asign value to all varible warna randome value ayega 