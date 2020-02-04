#include <stdio.h>
#include<math.h>
int main()
{
int number,digits=0,num2,sum=0;
printf("Enter a number. ");
scanf("%d",&number);
num2=number;
//original=number;
do{
    num2/=10;
    digits++;
}while(num2>0);
num2=number;
while (number>0) {
    sum=sum+pow(number%10,digits);
    number/=10;
}
//printf("%d",sum);
if(num2==sum){
 printf("This number is armstrong\n");
}else{
 printf("This is not armstrong\n");
}
    return 0;
}
