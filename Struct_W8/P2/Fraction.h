#pragma once

#include <iostream>
using namespace std;

typedef struct Fraction {
    int tu, mau;
} frac;

Fraction *genArrayPS(int size);

void freePtrPS(Fraction *ptrArrPS);

bool genNumber(Fraction *ptrArrPS, int size);

string getStrPS(Fraction Ps);

void printArray(Fraction *ptrPS, int size);