// A C program to print all the palindrome which are listed in a list
#include<stdio.h>
#include<string.h>

int main()
{
 char str[8][20]={"noon","level","abhi","madam","nitin","virendra","ashok","RACECAR"};   //These are some words group which has some palindromes
 char s[20],pal[20];
 int flag=1,i,j,index,k;
 printf("\nPalindrome words are: \n");
 for(i=0;i<8;i++)   
 {
  index=strlen(str[i]);
  strcpy(s,str[i]);
  for(j=index-1,k=0;j>=0;j--,k++)
  {
   pal[k]=s[j];
  }
  if(strcmp(pal,s)==0)
  {
   printf("%s",s);
   printf("\n");
  }
 }
 printf("%s",str[8]);
 printf("\n");
 return 0;
}


// Note : if you're entering words then on point always remember that 
// Either words are in in lowercase or uppercase then this program work properly  
