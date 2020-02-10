#include <stdio.h>
#include<math.h>
struct coordinate{
    int x1,y1;
};
double euclidean_distance(struct coordinate p1, struct coordinate p2){

    return sqrt(pow(p2.x1-p1.x1,2)+pow(p2.y1-p1.y1,2));
}
int main()
{
    struct coordinate p1;
    p1.x1=0;
    p1.y1=0;
    struct coordinate p2;
    p2.x1=5;
    p2.y1=4;
    printf("Distance between two points is %lf\n",euclidean_distance(p1,p2));
    return 0;
}
