#include <stdio.h>

int main()
{
    int decimal_value,binary[10],index=0;
    printf("Enter a decimal value. ");
    scanf("%d",&decimal_value);
    for(int i=0;i<10;i++){
        binary[i]=0;
    }
    while(decimal_value>0){
    binary[index]=decimal_value%2;
    index++;
    decimal_value=decimal_value/2;
}
for(int i=10;i>=0;i--){
 printf("%d",binary[i]);
}
    return 0;
}
