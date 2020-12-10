#include <iostream>

#include "funcP1.h"
using namespace std;

int main(void) {
    char a[100];
    cout << "Input your string: ";
    cin.get(a, 100).get();

    cout << '\n'
         << '\n';

    cout << "Your string when upper case: ";
    upCaseChar(a);
    cout << a << '\n'
         << '\n';

    cout << "Your string when lower case: ";
    lowCaseChar(a);
    cout << a << '\n'
         << '\n';

    cout << "Your string when title case: ";
    titleCaseChar(a);
    cout << a << '\n'
         << '\n';

    return 0;
}