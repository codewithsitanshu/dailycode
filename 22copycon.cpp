#include<iostream>
using namespace std;
class student
{

public:
    int id;
    int age;
    string name;

    student(int id,int age,string name)
    {

        this->name=name;
        cout << "under const" << endl;
    }

    student(const student &srcobj)
    {

        this->name=srcobj.name;
        cout << "under copy const" << endl;
    }

    public :

    void chouribazi(){
        cout<< this-> name << "is doing chouri bazi"<<endl;
    }

   ~student()
    {

        cout << "under dest" << endl;
    }


};

int main(){

    //student A(55,19,"aryan");
     //A.chouribazi();

     //student c=A;

     //cout<<c.name<<endl;

     //dynamic memory 
     student *A=new student(2,4,"golu");

     cout<< A ->name<<endl;
     delete A;

 return 0;
}