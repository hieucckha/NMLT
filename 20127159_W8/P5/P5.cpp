#include <iostream>

#include "funcP5.h"

int main(void) {
    using namespace std;

    char Source[100];

    cout << "Input string: ";
    cin.get(Source, 100).get();
    returnName(Source);
    titleCaseChar(Source);
    cout << "String after standardized: " << Source;

    return 0;
}