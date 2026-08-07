#include<stdio.h>
int stack[5];
int top=-1;

//stack-LIFO, use top as pointer, implement sing array and LL, But by array is easy
//stack-using array
//we can insert at top or delete from top
//push-insert
void push(int value){
	if(top==5-1){        //size-1=Full
		printf("Stack Overflow!! Cannot push %d\n", value);
	}
	else{           //if top=-1 --> it is empty
		top++;
		stack[top]=value;
		printf("%d pushed to stack.\n",value);
	}
}

//pop-delete
void pop(){
	int ele;
	if(top==-1){
		printf("Stack is Underflow!! Nothing to pop\n");
	}
	else{
		ele=stack[top];
		top--;
		printf("\n%d is poped\n",ele);
	}
}

//to display stack
void display(){
    int i;

    if(top == -1)
    {
        printf("Stack Underflow!! Stack is Empty.\n");
    }
    else
    {
        printf("\nStack Elements are:\n");
		//int i;
        for(i = top; i >= 0; i--)    //for(i=0;i<=top;i++)  //same as array
        {
            printf("%d is pushed\n", stack[i]);  //printf("%d", stack[i]);   //stack[i]==a[i]
		}
        //printf("\n");
    }
}

int main(){
	push(10);
	push(20);
	
	display();
	
	pop();
	pop();
	
	return 0;
}
