#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};
typedef struct Complex Complex;

void printComplex(Complex a)
{
    printf("%.3f + i%.3f\n", a.real, a.imag);
}

void add(Complex a, Complex b, Complex *c)
{
    c->real = a.real + b.real;
    c->imag = a.imag + b.imag;
}

int main()
{
    Complex c1 = {10, 15};
    Complex c2 = {2, 3};
    Complex c;
    printComplex(c1);
    printComplex(c2);
    add(c1, c2, &c);
    printComplex(c);
}