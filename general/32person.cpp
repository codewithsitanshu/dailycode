#include<iostream>
using namespace std;

class person {
string name;
int age;
public :
 void getdata();
 void dispdata();
};

void person :: getdata (){
cout<<"enter the  name of person "<<endl;
cin>>name;
cout<<"enter the age of person ";
cin>>age;
}

void person :: dispdata (){
cout<<" the name of person is "<<name<<endl;
cout<<"age of person is "<<age<<endl;


}

int main(){
    person p;
    p.getdata();
    p.dispdata();

}