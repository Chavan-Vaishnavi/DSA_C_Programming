#include<stdio.h>
int square(int a){
	int square=a*a;
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(a));
	
	return square;
}
int main(){
	int result=square(6);
	printf("%d",result);
}
