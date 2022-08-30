// Create an authenticate system in C. program should be menu driven.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 char user[10][20]={"Amresh","Lav","Ramesh","Suresh","Diwakar","Alok","Virendra","Jonny"};
 char pass[10][20]={"778122918","1221","2245362","998450","778122918","778122918","778122918","123456"};
 char s[20],p[20];
 int i,j,key,flag=0,index=0;
 printf("\nLogin Account: ");
 printf("\nEnter your username: ");
  gets(s);
 printf("\nEnter your current password: ");
  gets(p);
 for(i=0;i<10;i++)
 {
   if(strcmp(user[i],s)==0 && strcmp(pass[i],p)==0)     //Here, we have to copare both user and pass as well as 
   {
    flag=1;
    printf("%d",flag);                                  //TO check what is flag value.
    break;
   }
 }
 if(flag==1)                                            //Here, we check the flag value which may be change in for loop
  printf("\nCongrats! Login Successful");
else
  printf("\nSorry! Login Failed\nPlease enter correct username and password.");
return 0;
}
