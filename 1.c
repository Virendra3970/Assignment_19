// A C program to find the number of vowels in each of the 5 strings
#include<stdio.h>
#include<string.h>
int main()
{
 char str[5][50];
 int i,j,count=0;
 printf("\n Enter 5 cities name: ");
 for(i=0;i<5;i++)
   fgets(str[i],50,stdin);
 for(i=0;i<5;i++)
 {
  count=0;
  for(j=0;str[i][j];j++)
  
   if(str[i][j]=='a' ||str[i][j]=='e' ||str[i][j]=='i' ||str[i][j]=='o' ||str[i][j]=='u' ||str[i][j]=='A' ||str[i][j]=='E' ||str[i][j]=='I' ||str[i][j]=='O' ||str[i][j]=='U')
     count++;
  printf("\nNo. of vowels in %s is %d",str[i],count);
  printf("\n");
 }
 return 0;
}
