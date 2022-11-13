#include<stdio.h>
void main()
{
FILE *fp,*fp1,*fp2;
int c,i;
fp=fopen("data","w");
printf("enter the numbers");
for(i=0;i<10;i++)
{
scanf("%d",&c);
putw(c,fp);
}
fclose(fp);
fp=fopen("data","r");
fp1=fopen("even","w");
fp2=fopen("odd","w");
while((c=getw(fp))!=EOF)
{
if(c%2==0)
putw(c,fp1);
else
putw(c,fp2);
}
fclose(fp);
fclose(fp1);
fclose(fp2);
printf("\nEven Numbers are :");
fp1=fopen("even","r");
while((c=getw(fp1))!=EOF)
printf("%d\t",c);
printf("\nOdd Numbers are :");
fp2=fopen("odd","r");
while((c=getw(fp2))!=EOF)
printf("%d\t",c);
fclose(fp1);
fclose(fp2);
}
