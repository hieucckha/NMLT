#include <iostream>

#include "function.h"
#include "math.h"
using namespace std;

int main() {
    int choose, n;
    double x;
    cout << "----------------------------------------------" << endl;
    cout << "| 1. Cos(x): (-Inf < x < Inf)                |" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "| 2. ArcCotan(x):                            |" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "| 3. ArcTan(x): (-1 < x < 1)                 |" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "| 4. e^x: (-Inf < x < Inf)                   |" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "| 5. ln(1 + x): (-Inf < x < Inf)             |" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "| 6. ln((1 + x) / (1 - x)): (-Inf < x < Inf) |" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "| 7. Sin(x): (-Inf < x < Inf)                |" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "You choose: ";
    cin >> choose;
    while (true) {
        if ((choose >= 1) && (choose <= 7)) {
            break;
        }
        cout << "Reinput choose: ";
        cin >> choose;
    }

    switch (choose) {
        case 1:
            cout << "Input x: ";
            cin >> x;
            cout << "Input n: ";
            cin >> n;
            cout << "Cos(" << x << "): " << cos(x, n) << endl;
            break;
        case 2:
            cout << "Input x: ";
            cin >> x;
            cout << "Input n: ";
            cin >> n;
            cout << "ArcCotan(" << x << "): " << arcCotan(x, n) << endl;
            break;
        case 3:
            cout << "Input x: ";
            cin >> x;
            cout << "Input n: ";
            cin >> n;
            cout << "ArcTan(" << x << "): " << arcTan(x, n) << endl;
            break;
        case 4:
            cout << "Input x: ";
            cin >> x;
            cout << "Input n: ";
            cin >> n;
            cout << "e^" << x << ": " << eMuX(x, n) << endl;
            break;
        case 5:
            cout << "Input x: ";
            cin >> x;
            cout << "Input n: ";
            cin >> n;
            cout << "ln(" << (1 + x) << "): " << ln1PlusX(x, n) << endl;
            break;
        case 6:
            cout << "Input x: ";
            cin >> x;
            cout << "Input n: ";
            cin >> n;
            cout << "ln(" << ((1 + x) / (1 - x)) << "): " << ln1PlusXDivide(x, n) << endl;
            break;
        case 7:
            cout << "Input x: ";
            cin >> x;
            cout << "Input n: ";
            cin >> n;
            cout << "Sin(" << x << "): " << sin(x, n) << endl;
            break;
    }
    return 0;
}