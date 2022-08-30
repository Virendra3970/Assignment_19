// A C program to search a string in a list of string
#include<string.h>
#include<stdio.h>
int main()
{
 char str[13][20]={"Apple","Banana","Grapes","Pineapple","Guvava","Lemon","Pear","Lichi","Waterelon","Melon","Date","Orange","Blackbery" };
 char s[20]; int flag=0,i,j;
 printf("\nEnter a fuits to search: ");
 gets(s,20,stdin);  
           
for(i=0;i<13;i++) 
{
 for(j=0;str[i][j];j++)
 {
  if(strcmp(s,str[i])==0)
  {
  flag=1;
  printf("\nCongratulations! You\'ve searched right.");
   break;
  }
 }
}
if(flag!=1)
  printf("\nSorry! Try Again");
 return 0;
}


/* Remember this(code line number 9) point friends that if we used fgets function to store data then 
then we have to face difficulties while using comparion function like strcmp() strchar() and e.t.c.
We have to define NULL character while comparision.*/
