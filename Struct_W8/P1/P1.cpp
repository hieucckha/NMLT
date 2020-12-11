#include <iostream>

#include "Fraction.h"
int main() {
    using namespace std;

    frac p1, p2, resualt;
    int choose = 0;

    cout << "--Input the first fraction--\n";
    p1.input();

    cout << '\n';

    cout << "--Input the second fraction--\n";
    p2.input();

    cout << '\n';

    cout << "--What do you want to do with matrix--\n";
    cout << "1. Summation\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Your choose (1->4): ";
    cin >> choose;
    while ((choose <= 0) || (choose >= 9)) {
        cout << "Your choose is wrong, reinput: ";
        cin >> choose;
    }

    cout << '\n'
         << '\n';

    switch (choose) {
        case 1:
            resualt = Sum(p1, p2);
            cout << "The resualt is: ";
            resualt.print();
            break;
        case 2:
            resualt = Sub(p1, p2);
            cout << "The resualt is: ";
            resualt.print();
            break;
        case 3:
            resualt = Mul(p1, p2);
            cout << "The resualt is: ";
            resualt.print();
            break;
        default:
            resualt = Div(p1, p2);
            cout << "The resualt is: ";
            resualt.print();
            break;
    }

    return 0;
}