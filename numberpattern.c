#include<stdio.h>

int main()
{

int i,j,a[5]={3,9,1,7,4};

for(i=5;i>=1;i--)
{
for(j=i;j>=1;j--)
{
printf("%d ",a[5-j]);
}

printf("\n");
}

}