#include "function.h"

#include <iostream>

#include "math.h"
#define PI 3.14

int factorial(int inputNumber) {
    int tempNumber;
    int resualt = 1;

    tempNumber = inputNumber;
    for (int i = tempNumber; i > 0; i--) {
        resualt *= i;
    }

    return resualt;
}

double cos(double x, int n) {
    double resualt = 0;

    for (int i = 0; i <= n; ++i) {
        resualt += ((pow(-1, i) / factorial(2 * i)) * pow(x, 2 * i));
    }

    return resualt;
}

double arcCotan(double x, int n) {
    double resualt = 0;

    for (int i = 0; i <= n; ++i) {
        resualt += ((pow(-1, i) / (2 * i + 1)) * pow(x, (2 * i + 1)));
    }
    resualt = (PI / 2) - resualt;

    return resualt;
}

double arcTan(double x, int n) {
    double resualt = 0;
    for (int i = 1; i <= n; ++i) {
        resualt += ((pow(-1, (i + 1)) / (2 * i - 1)) * pow(x, (2 * i - 1)));
    }

    return resualt;
}

double eMuX(double x, int n) {
    double resualt = 0;
    for (int i = 0; i <= n; ++i) {
        resualt += (((float)1 / factorial(i)) * pow(x, i));
    }

    return resualt;
}

double ln1PlusX(double x, int n) {
    double resualt = 0;
    for (int i = 1; i <= n; ++i) {
        resualt += ((pow(-1, (i + 1)) / i) * pow(x, i));
    }

    return resualt;
}

double ln1PlusXDivide(double x, int n) {
    double resualt = 0;
    for (int i = 1; i <= n; ++i) {
        resualt += (((float)2 / (2 * i - 1)) * pow(x, (2 * i - 1)));
    }

    return resualt;
}

double sin(double x, int n) {
    double resualt = 0;
    for (int i = 0; i <= n; ++i) {
        resualt += ((pow(-1, i) / factorial(2 * i + 1)) * pow(x, (2 * i + 1)));
    }

    return resualt;
}