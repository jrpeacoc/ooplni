/*
NI: Quiz #3
*/

/* -----------------------------------------------------------------------
 1. What are the five iterator categories?
    List them in order of strength, from weakest to strongest.
*/

/* -----------------------------------------------------------------------
 2. What is the weakest iterator that the algorithm std::equal() needs?
*/

/* -----------------------------------------------------------------------
 3. What is the output of the following?
*/

#include <iostream> // boolalpha, cout, endl

int*& f (int*& r) {
    ++*r;
    return r;}

int main () {
    using namespace std;
    cout << boolalpha;   // bool outputs as true or false

    {
    int  i = 2;
    int* p = &i;
    int* q = f(p);
    cout << i          << " ";
    cout << (&q == &p) << endl;
    }

    {
    int   i = 2;
    int*  p = &i;
    int*& q = f(p);
    cout << i          << " ";
    cout << (&q == &p) << endl;
    }

    return 0;}
