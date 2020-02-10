#include <stdio.h>
struct student_data{
    int id,mm,dd,yy;
    char name[50];
    char address[60];
    char faculty[15];
};
int main()
{
    char empty=0;
    struct student_data d1[5];
  for(int i=0;i<5;i++){
      printf("Enter the sudent ID of %d student ",i+1);
      scanf("%d",&d1[i].id);
   printf("Enter the name of %d student ",i+1);
scanf(" ");
   gets(d1[i].name);
printf("Enter the address of %d student ",i+1);
gets(d1[i].address);
printf("Enter the faculty of %d student ",i+1);
scanf("%s",d1[i].faculty);
printf("Enter student date of birth in mm/dd/yy format ");
scanf("%d/%d/%d",&d1[i].mm,&d1[i].dd,&d1[i].yy);
printf("\n");

  }
   printf("%18cID %16cName %13cAddress %13cFaculty %6cMM%6c DD%6c YY \n",empty,empty,empty,empty,empty,empty,empty);
  for(int i=0;i<5;i++){
printf("%20d %20s %20s %20s %8d %8d %8d\n",d1[i].id,d1[i].name,d1[i].address,d1[i].faculty,d1[i].mm,d1[i].dd,d1[i].yy);
  }
return 0;
}
