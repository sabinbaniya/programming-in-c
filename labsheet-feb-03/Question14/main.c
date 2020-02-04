#include <stdio.h>
#include<string.h>
int main()
{
   int condition[4]={};
    char password[50]={},strong_password=0;
    printf("password:\n");
    scanf("%s",password);
if(strlen(password)>5){
   for(int i=0;i<strlen(password);i++){
       if(password[i]>='a' && password[i]<='z'){
           condition[0]=1;
       }else if(password[i]>='A' && password[i]<='z'){
           condition[1]=1;
       }else if(password[i]>='1' && password[i]<='9'){
           condition[2]=1;
       }else{
           condition[3]=1;
       }
   }
   for(int i=0;i<4;i++){
       if(condition[i]==1){
           strong_password=1;
       }else{
           strong_password=0;
       }
   }
   if(strong_password==1){
       printf("This is a strong password.\n");
   }else{
       printf("This is not a strong password.\n");
   }
}else{
    printf("this is not a strong passsword.\n");
}
    return 0;
}
