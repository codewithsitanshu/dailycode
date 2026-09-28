#include<iostream>
using namespace std;
int main () {
    int x=10;
    int y=x++;//y=x,
    cout<<"post inc ans:"<<x<<","<<y<<endl;
    int z=++x;
    cout<<"pre inc ans:"<<x<<","<<y<<","<<z<<endl;
    return 0;
    
}
