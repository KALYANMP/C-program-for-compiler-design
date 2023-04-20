#include <stdio.h>
int main() {
	int arr[10]={1,2,3,4,5};
	int i,sum=0,avg;
	for(i=0;i<5;i++) {
		sum=sum+arr[i];
		avg=sum/5;
	}
	printf("the sum is %d",sum);
	printf("\nthe avg is %d",avg);
	return 0;
}
