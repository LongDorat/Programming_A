#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);

    age >= 6 ? printf("Tuoi %d: Du tuoi vao lop 1", age) : printf("Tuoi %d: Khong du tuoi vao lop 1", age);

    return 0;
}