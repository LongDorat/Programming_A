#include <stdio.h>
//Khai bao cau truc 
struct Point
{
    float x, y;
};
int main() { 
    struct Point a;
    //Doc du lieu cho bien a    
    scanf("%f %f", &a.x, &a.y);
    printf("(%.3f, %.3f)", a.x, a.y);
    return 0;
}

//! You can copy all of this but delete ONLY this comment line