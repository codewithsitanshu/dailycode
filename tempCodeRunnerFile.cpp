#include <iostream>
using namespace std;
class student
{

public:
    int id;
    int age;
    int nos;

    student()
    {
        cout << "constructor called" << endl;
    }

public:

    void study()
    {
        cout << this->name << " is studying" << endl;
    }
    
    void sleeping(){
        cout<<this->name <<"is  sleeping "<<endl;
    }
};