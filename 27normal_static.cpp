#include<iostream>
using namespace std;

void test () {
    int a=0;
    static int b=0;

    a++;
    b++;

    cout<<"A:"<<a<<endl;
    cout<<"B:"<<b<<endl;
}
int main() {
    test();
    test();
    test();
    return 0;
}