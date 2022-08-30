//write a program in that asks the user to enter a username. If it is one of the names in the list then 
// the user is allowed to calculate the factorial of a number, Otherwise show a error massage.
#include<stdio.h>
#include<string.h>
int factorial(int num)
{
 int fact=1;
 if(num==1 || num==0)
   return 1;
 fact=num*factorial(num-1);
 return fact;
}
int main()
{
 int num,i,j,f,flag=0;
 char s[20], str[4][20]={"virendra123","jonny","prateek"};
 printf("\nEnter a username: ");
 gets(s);
 for(i=0;i<4;i++)
 {
  for(j=0;str[i][j];j++)
  {
  if(strcmp(str[i],s)==0)
  {
    flag=1;
   printf("\nEnter a number for factorial: ");
   scanf("%d",&num);
   f=factorial(num );
   printf("%d",f);
   break;
  }
  }
 }
 if(flag!=1)
 {
   printf("\nSorry! Incorrect Username");
   
  }
 return 0;
}
 
