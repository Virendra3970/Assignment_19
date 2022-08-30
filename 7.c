//A C program to check whether all the ip address are valid are not which are given in a list of strings
#include<stdio.h>
#include<string.h>
int main()
{
 char str[3][30]={"100.00.100.20","200.212.11.00","300.100.200.420"};
 int k,i,j,flag=0; char *a,count=0;
 printf("\nValid ip address are: ");
for(j=0;j<3;j++)
{
 for(k=0;str[i][k];k++)
 {
 a=strtok(str[j],".");
 while(a!=NULL)
 {
  i=atoi(a);
  count++;
  if((i>=0) && (i<=255))
  {
   
  }
  a=strtok(NULL,".");
 }
 }
 /*if(flag==0)
  printf("%s ",str[j]);*/
 printf("\n");
 
}
 return 0;
}
