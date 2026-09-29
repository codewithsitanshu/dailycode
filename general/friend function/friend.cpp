//how to use friend fn and when to use


/*#include<iostream>
using namespace std;

class demo {
int a;



};

void example(){     //  cannot acces the  private and  protected menter of class



cin>>a;
cout<<a;


}


int main () {
    demo d;

    d.example(); 
    return 0
} 
    */




//-------------------------------solution------------------------------- :

#include<iostream>
using namespace std;

class demo {
int a;

public :
friend void example(demo);//mistake 2:here also pass the object
};

 void  example(demo d){   /* mistake 1- : 1- i use demo ob but accessing  with ob.a*/
cout<<"now enter the value "<<endl;
cin>>d.a;
cout<<"output :"<<d.a;


}


int main () {
    demo d;

    example(d); 
    return 0;
} 