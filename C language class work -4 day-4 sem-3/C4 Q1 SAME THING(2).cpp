# include <stdio.h>
# include <conio.h>
struct  employee
{
char name[50] ;
int empId ;
float salary ;
} ab;
int  main( )
{
printf("\n Employee Details are : " ) ;
printf("\n Name: %s" ,ab.name ) ;
printf("\n Id: %d" ,ab.empId ) ;
printf("\n Salary: %f\n",ab.salary ) ;
return 0 ;
}
