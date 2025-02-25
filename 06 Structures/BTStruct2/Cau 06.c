#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};
typedef struct Complex Complex;

Complex readComplex()
{
    Complex a;
    scanf("%f %f", &a.real, &a.imag);
    return a;
}

void printComplex(Complex a)
{
    printf("%.3f + i%.3f", a.real, a.imag);
}

int main()
{

    Complex a;

    a = readComplex(); // Gọi hàm nhập 1 số phức từ bàn phím

    printComplex(a); // Hiển thị số phức a lên màn hình

    return 0;
}