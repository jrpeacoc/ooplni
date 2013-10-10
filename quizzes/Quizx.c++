/*
NI: Quiz #5
*/

/* -----------------------------------------------------------------------
1. What is the output of the following program?
*/

#include <iostream> // cout, endl
#include <vector>   // vector

using namespace std;

struct A {
    A             ()         {cout << "A() ";}                  // default constructor
    A             (int)      {cout << "A(int) ";}               // int constructor
    A             (const A&) {cout << "A(A) ";}                 // copy constructor
    ~A            ()         {cout << "~A() ";}                 // destructor
    A& operator = (const A&) {cout << "=(A) "; return *this;}}; // copy assignment operator

int main () {
    {
    A a[5] = {2, 3, 4};
    cout << endl;
    }
    cout << endl << endl;

    {
    A* a = new A[5];
    cout << endl;
    fill(a, a + 3, 2);
    cout << endl;
    delete [] a;
    cout << endl;
    }
    cout << endl;

    {
    vector<A> x(5, 2);
    cout << endl;
    }
    cout << endl;

    return 0;}
