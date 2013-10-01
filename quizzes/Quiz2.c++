/*
NI: Quiz #2
*/

/* -----------------------------------------------------------------------
 1. For the '<<' operator that is defined on 'int', what is the
    l-value / r-value nature of the return, the left argument, and
    the right argument?

r-value, r-value, r-value
*/

/* -----------------------------------------------------------------------
 2. For the '>>=' operator that is defined on 'int', what is the
    l-value / r-value nature of the return, the left argument, and
    the right argument?

l-value, l-value, r-value
*/

/* -----------------------------------------------------------------------
 3. For the '<<' operator that is defined on 'ostream', what is the
    l-value / r-value nature of the return, the left argument, and
    the right argument?

l-value, l-value, r-value
*/

/* -----------------------------------------------------------------------
 4. What is the output of the following?

3 true
3 false
*/

#include <iostream> // cout, endl

int main () {
    using namespace std;
    cout << boolalpha;   // bool outputs as true or false

    {
    int   i  = 2;
    int*  p  = &i;
    int** pp = &p;
    int** qq = pp;
    ++**qq;
    cout << i          << " ";
    ++qq;
    cout << (pp == &p) << endl;
    }

    {
    int    i  = 2;
    int*   p  = &i;
    int**  pp = &p;
    int**& qq = pp;
    ++**qq;
    cout << i          << " ";
    ++qq;
    cout << (pp == &p) << endl;
    }

    return 0;}
