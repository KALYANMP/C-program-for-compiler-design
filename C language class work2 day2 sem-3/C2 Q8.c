#include<stdio.h>
int main()
{
  int i,j,a[10],n,m,b=0,c=0;
  printf("\nEnter the limit:");
  scanf("%d",&n);
  printf("\nEnter the values:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nGiven values are:");
  for(i=0;i<n;i++)
  {
    printf("\na[%d]=%d",i,a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>0)
    {
       printf("\nPositive value a[%d]=%d",i,a[i]);
       c++;
    }
    else
    {
       printf("\nNegative value a[%d]=%d",i,a[i]);
       b++;
    }
  }
  printf("\nNo of positive numbers:%d",c);
  printf("\nNo of negative numbers:%d",b);
  return 0;
}
