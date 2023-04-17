# include <stdio.h>
# include <conio.h>
struct  employee
{
char name[50];
int empId;
int age;
float salary;
}ab;
int  main( )
{
struct employee ab ;
printf("\n Enter employee details !\n") ;
printf("\n Name") ;
scanf("%d", ab.name ) ;
printf("\n ID") ;
scanf("%d",&ab.empId ) ;
printf("\n Age") ;
scanf("%d",&ab.age ) ;
printf("\n Salary") ;
scanf("%f",&ab.salary ) ;

printf("\n Entered employee detail are !" ) ;
printf("\n Name: %s" ,ab.name ) ;
printf("\n Id: %d" ,ab.empId ) ;
printf("\n Id: %d" ,ab.age ) ;
printf("\n Salary: %f\n",ab.salary ) ;
return 0 ;
}
