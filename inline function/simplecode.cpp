/*what is inline fn-inline fn is a fn in which compiler replace function call with its actual code
at the point when its called */

//supoose we have this prog

#include<iostream>
using namespace std;

class  square {
int x;

public :
inline int dosquare(int x){

    cout<<x*x;

}


};

int main () {
square a;
     a.dosquare(5);//when calling a meber fn we must use an obj to call it


return 0;
}



/*Normal function:

main → function → main
       ↑ extra travel ↑


Inline:

main → directly code*/