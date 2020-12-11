#pragma once

typedef struct frac {
    int tu, mau;

    void input();

    void print();

    void reduceFraction();

} frac;

int GCD(int a, int b);

frac Sum(frac _Frac_1, frac _Frac_2);

frac Sub(frac _frac_1, frac _frac_2);

frac Mul(frac _frac_1, frac _frac_2);

frac Div(frac _frac_1, frac _frac_2);