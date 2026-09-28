#include<iostream>
using namespace std;


    class student{

    string name;
    int id;
public:
    void display(string name ){
        cout<<"hellow  "<<name;
    }
};

int main (){
    student a;
    a.display("sitanshu");

    return 0;
}

//a communiate with dipaly and send a message that is sitanshu so then
//display will show hellow sitanshu