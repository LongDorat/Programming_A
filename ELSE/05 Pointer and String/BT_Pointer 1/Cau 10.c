#include <stdio.h>

int main()
{
    char c = 'z';

    char* p = &c;
    char** q = &p;

    return 0;
}