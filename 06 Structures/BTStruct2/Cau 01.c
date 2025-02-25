#include<stdio.h>
#include<math.h>

struct Point{
	double x,y;
};

void readPoint(struct Point *p){
	scanf("%lf%lf",&(p->x), &(p->y));	
}

void printPoint(struct Point a){
	printf("(%.4lf, %.4lf)\n",a.x,a.y);
}

int main(){
	struct Point A;
    readPoint(&A);
    struct Point B;
    readPoint(&B);

    printPoint(A);
    printPoint(B);

    double distance = sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
    printf("Distance: %.4lf",distance);
	return 0;
}   