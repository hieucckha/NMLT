#include "Fraction.h"

#include <iostream>

void frac::input() {
    std::cout << "Input your numerator of fraction: ";
    std::cin >> this->tu;

    std::cout << "Input your denominator of fraction: ";
    std::cin >> this->mau;
    while (this->mau == 0) {
        std::cout << "The required denominator must be different from zero." << '\n';
        std::cout << "Reinput your denominator: ";
        std::cin >> this->mau;
    }
}

void frac::print() {
    std::cout << this->tu << '/' << this->mau;
}

int GCD(int a, int b) {
    if (a == 0) {
        return b;
    }

    return GCD(b % a, a);
}

void frac::reduceFraction() {
    int temp = this->tu;
    this->tu /= GCD(this->tu, this->mau);
    this->mau /= GCD(temp, this->mau);
}

frac Sum(frac _frac_1, frac _frac_2) {
    frac resualt;

    resualt.tu = _frac_1.tu * _frac_2.mau + _frac_2.tu * _frac_1.mau;
    resualt.mau = _frac_1.mau * _frac_2.mau;

    resualt.reduceFraction();

    return resualt;
}

frac Sub(frac _frac_1, frac _frac_2) {
    frac resualt;

    resualt.tu = _frac_1.tu * _frac_2.mau - _frac_2.tu * _frac_1.mau;
    resualt.mau = _frac_1.mau * _frac_2.mau;

    resualt.reduceFraction();

    return resualt;
}

frac Mul(frac _frac_1, frac _frac_2) {
    frac resualt;

    resualt.tu = _frac_1.tu * _frac_2.tu;
    resualt.mau = _frac_1.mau * _frac_2.mau;

    resualt.reduceFraction();

    return resualt;
}

frac Div(frac _frac_1, frac _frac_2) {
    frac resualt;

    resualt.tu = _frac_1.tu * _frac_2.mau;
    resualt.mau = _frac_1.mau * _frac_2.tu;

    resualt.reduceFraction();

    return resualt;
}