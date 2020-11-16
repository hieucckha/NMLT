#include <iostream>

using namespace std;

int main() {

    int result, number;

    cout << "Input number: "; cin >> number;
    while(number != 0) {
        result += number % 10;
        number /= 10;
    }
    
    cout << result << endl;
    return 0;
}