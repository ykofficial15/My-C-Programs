#include<stdio.h>
#include<conio.h>
void main()
{
  float radius,area,perimeter; 
  printf("\nEnter the radius of the circle:");
  scanf("%f",&radius);
  area = 3.14*radius*radius;
  perimeter = 2*3.14*radius;
  printf("\nArea of the given cirlce is:%f",area);
  printf("\n\nPerimeter of the given circle is:%f",perimeter);
  getch();
}