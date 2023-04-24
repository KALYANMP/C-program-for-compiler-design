#include <stdio.h>
int main()
{
   int a,sq,sqroot,cube;
   printf("Enter the number: ");
   scanf("%d",&a);
   sq=a*a;
   sqroot=a^(1/2);
   cube=a*a*a;
   printf("%d is the square of %d",sq,a);
   printf("\n%d is the square root of %d",sqroot,a);
   printf("\n%d is the square of %d",cube,a);
   return 0;  
}
