#include<iostream>
using namespace std;


    class student{
            public:

        static int x;///phele declaration hoga abhi location nahiu mila hai 

        student(){
            cout<<x++;
        }
    };

    int student::x=0;//yaha pe value dfiya gya hai
    
    int main() {
        student s1,s2,s3;
        return 0;

    }