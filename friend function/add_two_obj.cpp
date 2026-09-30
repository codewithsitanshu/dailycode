//add two obj using friend fn 

#include<iostream>
using namespace std;

class number{
int data;


public :


friend void add(number num1 ,number num2 );

void read () {

    cout<<"enter numb "<<endl;
    cin>>data;
}


};

void add(number num1,number num2){
int sum=0;
sum=num1.data+num2.data;
cout<<"add :"<<sum<<endl;
}


int main () {

number num1;
number num2;

num1.read();
num2.read();
add( num1, num2);

}