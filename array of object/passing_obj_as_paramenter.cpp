// passing obj as parameter

#include<iostream>
using namespace std;

class xyz{
    public :
    
int x;
int y;

void read () {
    cout<<"enter the value of x and y "<<endl;
    cin>>x>>y;
}
    void display(xyz ob){
        cout<<ob.x<<" "<<ob.y;  //.memberfn that you want to acces;
    }




};


int main () {
xyz s,s1;

s.read();
s1.read();

cout<<"displaying by the passng the obj to fn "<<endl;

s1.display(s1); /* we can use s1 and s to call the fn it will give same value and will work until we pass the same object*/

return 0;
}