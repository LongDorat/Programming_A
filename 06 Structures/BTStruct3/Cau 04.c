#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>

//struct defintion
//main, variable declaration
struct Point
{
    float x, y;
};
int main(){
struct Point a;
scanf("%f %f", &a.x, &a.y);
    printf("(%.3lf, %.3lf)", a.x, a.y);
    
    return 0;
}

//! Only write the code between the line 10 to 16 into the system