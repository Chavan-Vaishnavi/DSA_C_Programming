#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int low=0;
	int up=4;
	int flag=0;
	//int ele=3;
	int ele;
	int mid;
	
	printf("element to search:");
	scanf("%d",&ele);
	
	while(low<=up){
		mid = (low+up)/2;
		
		if(a[mid]==ele){
			flag=1;
			break;
		}
		else if(a[mid]<ele){
			low=mid+1;	
		}
		else{
			up=mid-1;
		}	
	}
	if(flag==1){
		printf("Element is found & location: %d",mid);
	}
	else{
		printf("Element not found.");
	}
}
