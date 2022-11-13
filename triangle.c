#include <stdio.h>
void main()
{
int rows, i, j,count;
printf("Enter number of rows: ");
scanf("%d", &rows);
count=rows;
for(i=1; i<=rows; i++)
{
for(j=1;j<=rows;j++)
{
if(j==count)
{
printf("\t 0");
}
else if(j<count)
{
printf("\t 1");
}
else
{
printf("\t-1");
}
}
count--;
printf("\n");
}
}

