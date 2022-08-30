//A C progrma to verify a list of email address via '@' sign
#include<stdio.h>
#include<string.h>
int main()
{
 char str[5][20]={"shukla@gamil.com","ankurgmail.com","mishra@gmail.com","virendragmail.com","jamon@gmail.com"};  //These are list of some emails
 int i,j,flag=1;
 printf("\nCorrect emails are: ");
 for(i=0;i<5;i++)
 {
  for(j=0;str[i][j];j++)
  {
   if(str[i][j]=='@')
   { 
      printf("\n %s",str[i]);
       break;
   } 
  }
 }
 printf("\n");
 return 0;
}
