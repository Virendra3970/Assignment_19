//A C program to read and display 2D arrays of strings by user
#include<stdio.h>
#include<string.h>
int main()
{
 int i,j;
 printf("\nEnter the no. of string: ");
 scanf("%d",&j);
 char s[j][50];
 printf("\nEnter the elements of the string: ");
 for(i=0;i<=j;i++)
   gets(s[i]);
 printf("\nElements are: ");
 for(i=0;i<=j;i++)
  printf("%s ",s[i]);
 return 0;
}
