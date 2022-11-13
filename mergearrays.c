#include<stdio.h>
void sort(int merge[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
int temp;
for(j=i+1;j<n;j++)
{
if(merge[i]>merge[j])
{
temp=merge[i];
merge[i]=merge[j];
merge[j]=temp;
}
}
}
}
void main()
{
int arr1[50], arr2[50], size1, size2, i, k, merge[100],n;
printf("Enter Array 1 Size: ");
scanf("%d", &size1);
printf("Enter Array 1 Elements: ");
for(i=0; i<size1; i++)
{
scanf("%d", &arr1[i]);
merge[i] = arr1[i];
}
k = i;
printf("\nEnter Array 2 Size: ");
scanf("%d", &size2);
printf("Enter Array 2 Elements: ");
for(i=0; i<size2; i++)
{
scanf("%d", &arr2[i]);
merge[k] = arr2[i];
k++;
}
printf("\nThe new array after merging is:\n");
for(i=0; i<k; i++)
{
printf("%d ", merge[i]);
}
n=size1+size2;
printf("\nAfter sorting...\n");
sort(merge,n);
for(i=0 ; i<n ; i++)
{
printf(" %d ",merge[i]);
}
}
