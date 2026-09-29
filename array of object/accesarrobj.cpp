// In this program, we will learn how to access an array of objects.

#include <iostream>
using namespace std;

class Std
{

public:
    string name;
    int roll;

public:
    Std()
    {
        cout << "in cons  " << name << endl;
        this->name;
    }

    void display()
    {

        cout << "displayed name using fn " << name << endl;
    }
};

int main()
{

    // Declaring an array of 5 objects
    // Syntax: ClassName arrayName[size]

    Std s[5];

    // Accessing an object's data member using:
    // arrayName[index].member

    s[0].name = "sitanshu";   // Accessing the 1st object's name
    s[1].name = "sitanshuu";  // Accessing the 2nd object's name
    s[2].name = "sitanshuuu"; // Accessing the 3rd object's name


    // One more way to access an array of objects:
    
    // Syntax: (arrayName + index)->member

    (s+0)->name;

    (s+4)->name = "golu";



    for (int i = 0; i < 5; i++)
    {

        s[i].display();
    }

    cout << s[0].name;

    void display();

    return 0;
}


/*
Final Learning:

1. How to declare an array of objects:

   ClassName arrayName[size]

   Example:
   Std s[5]


2. First way to access an array of objects:

   arrayName[index].memberFunction / memberAttribute

   Example:
   s[0].name
   s[0].display()


3. Second way to access an array of objects:

   (arrayName + index)->memberFunction / memberAttribute

   Example:
   (s + 0)->name
   (s + 4)->name


4. Both ways can be used to access the members
   of an object in an array.


*/