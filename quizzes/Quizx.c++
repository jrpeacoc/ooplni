/*
NI: Quiz #1
*/

/* -----------------------------------------------------------------------
 1. What is the output of the following?
*/

#include <iostream> // cout, endl

using namespace std;

void f (bool b) {
    cout << "f1 ";
    if (b)
        throw exception();
    cout << "f2 ";}

int main () {
    try {
        cout << "m1 ";
        f(false);
        cout << "m2 ";}
    catch (exception& e) {
        cout << "m3 ";}
    cout << "m4 " << endl;

    try {
        cout << "m1 ";
        f(true);
        cout << "m2 ";}
    catch (exception& e) {
        cout << "m3 ";}
    cout << "m4" << endl;

    return 0;}
