#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

// Insert at Beginning
void insertion_beginning()
{
    struct Node *ptr;
    int item;

    ptr = (struct Node *)malloc(sizeof(struct Node));

    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
        return;
    }

    printf("\nEnter Value: ");
    scanf("%d",&item);

    ptr->data = item;

    if(head == NULL)
    {
        ptr->prev = NULL;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        ptr->next = head;
        ptr->prev = NULL;
        head->prev = ptr;
        head = ptr;
    }

    printf("\nNode Inserted Successfully.\n");
}

// Delete First Node
void deletion_beginning()
{
    struct Node *ptr;

    if(head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if(head->next == NULL)
    {
        ptr = head;
        head = NULL;
        free(ptr);

        printf("\nNode Deleted Successfully.\n");
    }
    else
    {
        ptr = head;

        head = head->next;
        head->prev = NULL;

        free(ptr);

        printf("\nNode Deleted Successfully.\n");
    }
}

// Display
void display()
{
    struct Node *ptr;
	ptr = head;
	
    if(head == NULL)     //or ptr==NULL
    {
        printf("\nList is Empty.\n");
    }
//	else{
//		printf("\nPrinting values while(ptr!=NULL).\n");
//	}

    printf("\nDoubly Linked List:\n");

    while(ptr != NULL)
    {
        printf("%d <-> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}

// Main Function
int main()
{
    int choice;

    while(1)
    {
        printf("\n\n----- Doubly Linked List Menu -----");
        printf("\n1. Insert at Beginning");
        printf("\n2. Delete First Node");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insertion_beginning();
                break;

            case 2:
                deletion_beginning();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid Choice!");
        }
    }

    return 0;
}
