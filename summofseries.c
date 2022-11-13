#include<stdio.h>
#include<math.h>
void main()
{
int n,i;
double sums = 0.0, ser;
printf("Enter the limit :");
scanf("%d",&n);
for (i = 1; i <= n; i++)
{
ser = 1 / pow(i, i);
sums += ser;
}
printf("%.5f", sums);
}
