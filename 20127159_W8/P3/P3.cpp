#include <iostream>

#include "funcP3.h"
using namespace std;

int main() {
    char a[100];

    cout << "Input your string: ";
    cin.get(a, 100).get();

    reverseString(a);
    cout << '\n'
         << "Your reverse string is: " << a;

    return 0;
}