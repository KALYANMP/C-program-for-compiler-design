# include <stdio.h>
# include <conio.h>
# include <string.h>
int  main( )
{
char a[50], b[50] ;
printf ("\n Enter a string : " ) ;
scanf("%s", a ) ;
printf("\n Enter the string for Add : " ) ;
scanf("%s", b ) ;
strcat ( a, b ) ;
printf("\n String after concatenation = %s", a ) ;
return( 0 );
}
