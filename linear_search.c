#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int i,flag=0;
	int ele;
	printf("Enter element to search:");
	scanf("%d",&ele);
	
	while(i<5){
		if(a[i]==ele){
			flag=1;
		}
		i++;
	}
	
	if(flag==0){
		printf("\n element is not found");
	}
	else{
		printf("\n element found");
	}
}
