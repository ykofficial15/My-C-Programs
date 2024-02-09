#include<stdio.h>
#include<conio.h>
int main()
{
    int i,size,position,value,a[50];
printf("enter size of the array:");
scanf("%d",&size);
printf("enter %d elements\n",size);
for(i=0;i<size;i++)
    scanf("%d",&a[i]);
printf("enter the position where you want to insert an element:");
scanf("%d",&position);
printf("enter the value to be inserted:");
scanf("%d",&value);
for(i=size-1;i>=position-1;i--)
        a[i+1]=a[i];
    a[position-1]=value;
for(i=0;i<=size;i++)
{
    printf("%d\n",a[i]);
}
}