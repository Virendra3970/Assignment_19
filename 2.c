// A C program to sort 10 cities name stored in two dimensional array, taken by user
#include<stdio.h>
#include<string.h>
int main()
{
 char temp[10][50], str[10][50],t[20]; int j,i;
 printf("\nEnter 10 cities names: ");
 for(i=0;i<10;i++)
   gets(str[i]);
 for(i=0;i<9;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(strcmp(str[i],str[j])>0)
   {
    strcpy(t,str[i]);
    strcpy(str[i],str[j]);
    strcpy(str[j],t);
    }
  }
 }
 for(i=0;i<10;i++)
 {
    printf("%s ",str[i]);
 }
 printf("\n");
 return 0;
}
 
