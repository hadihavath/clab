#include<stdio.h>
void main()
{
int low, high, i, num, temp, r,sum;
printf("Enter two numbers (intervals): ");
scanf("%d %d", &low, &high);
printf("Armstrong numbers between %d an %d are: ", low, high);
for(i = low + 1; i < high; ++i)
{
sum=0;
num = i;
temp = i;
while(temp>0)
{
r=temp % 10;
sum=sum+(r*r*r);
temp=temp/10;
}
if(sum= =num)
{
printf("%d\t",sum);
}
}
}