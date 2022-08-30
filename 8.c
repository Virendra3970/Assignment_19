// A C program to find distance b\w two words in a given string
#include<stdio.h>
#include<string.h>
int main()
{
 char str[200], s1[20],s2[20];
 int i,j,index,d;
 printf("\nEnter a string: ");
 gets(str);
 printf("\nEnter 1st word: ");
 gets(s1);
 printf("\nEnter 2nd word: ");
 gets(s2);
 for(i=0;i<200;i++)
 {
  if(strcmp(str,s1)==0)
  {
   index=i;
  }
 }
 for(i=0;i<200;i++)
 {
  if(strcmp(str,s2)==0)
  {
   j=i;
  }
 }
 d=(j-index);
 printf("\nDistance b/w given two words is %d",--d);

 return 0;
}
