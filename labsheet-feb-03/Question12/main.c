#include <stdio.h>
#include<limits.h>
int main()
{
int number,max=0,min=INT_MAX,sum=0,no_of_positive=0;
do{
    printf("Enter a number. ");
    scanf("%d",&number);
    if(number>0){
        if(number<min){
            min=number;
        }
        if(number>max){
            max=number;
        }
        sum+=number;
        no_of_positive++;
    }
}while(number>0);
printf("Max element is %d.",max);
printf("Min element is %d.",min);
printf("Average is %lf\n",(double)sum/no_of_positive);
    return 0;
}
