#include <cstring>
#include <iostream>

#include "funcP2.h"
using namespace std;

int main() {
    char a[100];
    cout << "Input your string: ";
    cin.get(a, 100).get();

    cout << '\n'
         << "Your string is " << ((isPalidrom(a) == 1) ? " a symmetry string" : " not a symmetry string");

    return 0;
}