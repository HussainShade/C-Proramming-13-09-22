#include<stdio.h>
int main()
{
int i,j,rows;
printf("enter the no of rows");
scanf("%d",&rows);
for(i=1;i<=rows;++i)
{
for(j=rows;j>i;j--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d ",i);
}
printf("\n");
}
return 0;
}