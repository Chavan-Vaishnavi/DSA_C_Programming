#include<stdio.h>
int square(int a){
	printf("Square is %d\n",a*a);
	printf("Size of int %d\n",sizeof(int));
	printf("Size of variable %d",sizeof(a));
	
}
int main(){
	int num=100;
	square(num);
	return 0;
}
