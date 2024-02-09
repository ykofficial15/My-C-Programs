#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100];
    int i,e,n,pos;
    printf("enter no. of elements for stack:");
    scanf("%d",&e);
    printf("enter %d elements",e );
    for(i=0;i<e;i++)
    {
        scanf("%d",&a[e]);
    }
    printf("enter position for element");
    scanf("%d",&pos);
    printf("enter a element for insertion");
    scanf("%d",&n); 

   for(i=e-1;i>pos-1;i--)
   a[i+1]=a[i];
   a[pos-1]=n;
   for(i=0;i<e;i++)
   {
       printf("%d\n",a[e]);
   }
}