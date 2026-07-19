#include<stdio.h>
int main(){
	int sum=0;
	int i;
	float avg;
	int subject;
	
	printf("Enter total subjects count:");
	scanf("%d",&subject);
	
	int arr[subject];
	
	printf("Enter marks for total %d subjects:",subject);
	
	for(i=0;i<subject;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	//printf("Sum of marks is:%d\n",sum);
	avg=sum/subject;
	//printf("Avg. of marks is:%f",avg);
	printf("The sum is %d and Average is %f", sum,avg);
	
}
