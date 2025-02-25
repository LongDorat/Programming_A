#include <stdio.h>

struct Point
{
    float x;
    float y;
};

struct Point readPoint()
{
    struct Point a;
    scanf("%f %f", &a.x, &a.y);
    return a;
}

void printPoint(struct Point a)
{
    printf("(%.3f, %.3f)", a.x, a.y);
}

int main(){

    struct Point a;

    a = readPoint(); // Gọi hàm nhập 1 điểm từ bàn phím

    printPoint(a); // Hiển thị điểm a lên màn hình

    return 0;

}