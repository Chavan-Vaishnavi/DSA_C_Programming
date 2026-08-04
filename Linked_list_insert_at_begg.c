#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Insert at Beginning
void Insert()
{
    struct Node *ptr;
    int element;

    ptr = (struct Node *)malloc(sizeof(struct Node));

    if(ptr == NULL)
    {
        printf("\nOverflow");
        return;
    }

    printf("\nEnter an element: ");
    scanf("%d", &element);

    ptr->data = element;
    ptr->next = head;
    head = ptr;

    printf("Inserted Successfully.");
}

 //Display
void show()
{
    struct Node *ptr = head;

    if(ptr == NULL)
    {
        printf("\nLinked List is Empty.");
        return;
    }

    printf("\nLinked List:\n");

    while(ptr->next != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    // Last node
    printf("%d -> NULL\n", ptr->data);
}
//void show()
//{
//    struct Node *ptr;
//
//    ptr = head;
//
//    if(ptr == NULL)
//    {
//        printf("\nLinked List is Empty.");
//        return;
//    }
//
//    printf("\nLinked List Elements:\n");
//
//    while(ptr != NULL)
//    {
//        printf("%d ", ptr->data);
//        ptr = ptr->next;
//    }
//
//    printf("NULL\n");
//}

int main()
{
    int choice;

    while(1)
    {
        printf("\n\n----- Linked List Menu -----");
        printf("\n1. Insert");
        printf("\n2. Display");
        printf("\n3. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                Insert();
                break;

            case 2:
                show();
                break;

            case 3:
                exit(0);

            default:
                printf("\nInvalid Choice!");
        }
    }

    return 0;
}
