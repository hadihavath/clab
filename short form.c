#include<stdio.h>
void main()
{
int i,j,k;
char a[30], b[30];
puts("enter a string : \n");
gets(a);
printf("\nshort form of the string is : %c",a[0]);
for(i=0 ; a[i] != '\0' ; i++)
{
if(a[i] ==' ' )
{
printf("%c", a[i+1]);
}
}
}
