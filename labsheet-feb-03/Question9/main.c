#include <stdio.h>

int main()
{
    int num,sum=0;
printf("Enter a number. ");
scanf("%d",&num);
do{
    sum=sum+num%10;
    num/=10;
}while(num>0);
printf("%d\n",sum);
return 0;
}
