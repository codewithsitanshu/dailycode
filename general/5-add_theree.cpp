#include<iostream>
using namespace std;
int main () {
    int a,b,c;
    cout<<"enter the value of a ,b ,c " <<endl;
    cin>>a>>b>>c;
    cout<<(a+b+c);
    return 0;
}
/*cin uses spaces and Enter as separators not comma .
✓ Correct: 10 20 30
✓ Correct:
10
20
30
✗ Wrong: 10,20,30-in this case you will only get 10 as output 

Reason: cin cannot use commas as separators for integer input by default.

*/