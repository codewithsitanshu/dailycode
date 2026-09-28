#include<iostream>
using namespace std;
class demo{
    public :
    static int x;

    static void show(){
        cout<<"hellow";

    }
};
int demo::x=0;

    int main() {
        show();
        return 0;
    }