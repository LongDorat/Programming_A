#include <stdio.h>
#include <math.h>

struct Point{
    double x,y;
};

double distance(struct Point A, struct Point B){
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

int main()
{
    struct Point A = {1, 2};
    struct Point B = {3, 4};
    printf("%.4f", distance(A, B));
}