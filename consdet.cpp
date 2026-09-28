#include <iostream>
using namespace std;
class student
{

public:
    int id;
    int age;
    int nos;
    string name;

    student(int id ,int age,int nos,string name)
    {
        cout <<this->name<<"constructor called" << endl;
        this-> id=id;
        this-> age=age;
        this-> nos=nos;
        this-> name=name;
        
    }

public:

    void study()
    {
        cout << this->name << " is studying" << endl;
    }

    void sleeping(){
        cout<<this->name <<"is  sleeping "<<endl;
    }


    ~student(){
        cout<<"dtor run from here "<<endl;
    }
};
int main (){

cout<<"we have ente the main "<<endl;
    // student A;
    // A.id=5092;
    // A.age=19;
    // A.nos=5;
    // A.name="rahul";

    // A.study();

    // student B;
    // B.id=5092;
    // B.age=19;
    // B.nos=5;
    // B.name="ranu";

    //  B.sleeping();

    // student c;
    // c.id=5092;
    // c.age=19;
    // c.nos=5;
    // c.name="rishita";
    student A(2,19,5,"golu");
    student B(2,19,5,"ankit");
    student C(2,19,5,"kuamr");
cout<<A.id<<" "<<A.name<<" "<<A.age<<endl;
cout<<B.id<<" "<<B.name<<" "<<B.age<<endl;



return 0;

}