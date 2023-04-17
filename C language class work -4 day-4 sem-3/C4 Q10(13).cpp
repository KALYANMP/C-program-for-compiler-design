# include <stdio.h>
# include <conio.h>
union MyUnion
{
int a;
float b;
}UN;

int  main( )
{
printf("\n Size of union : %ld", sizeof(UN) );
UN.a = 10;
printf("\n a: %d,\n b: %f", UN.a, UN.b );
UN.b = 10.34F;
printf("\n a: %d,\n b: %f", UN.a, UN.b );
printf("\n Size of union : %ld", sizeof(UN) );
return 0;
}
