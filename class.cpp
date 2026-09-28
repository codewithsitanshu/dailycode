#include<iostream>

using namespace std;
 class student {
    public :
    int id;
    int age;
    string name;
    public:
    void study(){
        cout<<this->name <<"study"<<endl;
    }
    void sleep(){
        // this is a pointe r which is pointing toward the\
        //name
        cout<<this->name<<"sleeeping"<<endl;
    }
    void bunk(){
        
        cout<<this->name <<"bunk"<<endl;
    }


 };