#include<stdio.h>
void insertionSort(int arr[],int size)
{
	int i,j,key;
	for(i=0;i<size;i++){
		key=arr[i];  //insert
		
		//Shift elements greater than key to the left
		for(j=i-1;j>=0 && arr[j]>key;j--){
			arr[j+1]=arr[j];  //key=1 a[1]=a[0]	,key=2 a[2]=a[1]
		}
		
		arr[j+1]=key;  //a[0]=a[1] 7,8,6,5,2
		
	}
	
}

int printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
    }
    printf("\n");
}

int main(){
//	int arr[]={8,7,6,5,2};
//	int size=sizeof(arr)/sizeof(arr[0]);
	
	int arr[100], size, i;

    printf("Enter The Array Size: ");
   	scanf("%d", &size);

   	printf("Enter The Array Elements: ");
    for(i = 0; i < size; i++)
    {
    	scanf("%d", &arr[i]);
	}
	
	printf("Unsorted array:\n");
	printArray(arr,size);
	
	printf("\nSorted array:\n");
	insertionSort(arr,size);
	printArray(arr,size);
}
