#include <iostream>
using namespace std;

class student
{
string gf;
public:
    int id;
    int roll;
    string name;
    student(int id, int roll, string name, string gf)
    {
        this->id = id;
        this->roll = roll;
        this->name = name;
        this->id = id;
    }

public:
    void study()
    {
        cout << this->name << "is stuying" << endl;
    }
private:
    void chattting()
    {
        cout << this->name << "is chattting  with gf" << endl;
    }

public:
    ~student()
    {
        cout << "under dest" << endl;
    }
};
int main(){
    cout<<"under main "<<endl;
    student A(17,65,"GOLU","shweta");
    cout<<A.name<<" "<<A.gf;
    A.study();
    A.chattting();


return 0;
}
