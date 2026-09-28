#include<iostream>
using namespace std;

class vehicle{
protected:
string name;
string model;
int nooftyre;

public:
void starteng(){
    cout<<"engine has been started for "<<name<<endl;
    
}
void stopteng(){
    cout<<"engine has been stoped for "<<name<<endl;

}

vehicle (string _name,string _model,int _nooftyre){
cout<<"in the base ctor"<<endl;
this->name=_name;
this->model=_model;
this->nooftyre=_nooftyre;
}



};

class car : public vehicle{
    public:
string handeltye;
int noofdoor;



void startac(){
    cout<<"ac has been satrted  for "<<name <<endl;
    
}
void stopac(){
    cout<<"ac has been stoped  for "<<name <<endl;

}
car(string _name,string _model,int _nooftyre,string _handelstye,int _noofdoor):vehicle(_name, _model, _nooftyre){

cout<<"under derived ctor"<<endl;
this->handeltye=_handelstye;
this->noofdoor=_noofdoor;


}


};

int main (){

    car A("alto800","xuav",4,"automatic",4);
    

    A.starteng();
    A.startac();
    A.stopac();
    A.stopteng();
    
;



return 0;
}