#include <stdio.h>

int main()
{
int side1,side2,side3;
printf("Enter thiree sides of triangle: \n");
scanf("%d %d %d",&side1,&side2,&side3);
if(side1==side2 || side2==side3 || side1==side3){
    printf("This is an isosceles triangle.\n");
}else if(side1==side2==side3){
    printf("This is an equilateral triangle.\n");
}else{
    printf("It is a scalene triangle.\n");
}

return 0;
}
