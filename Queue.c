// Queue using Array
// 2pointers-enqueue and dequeue

#include <stdio.h>
#include <stdlib.h>

int queue[6];
int front = -1, rear = -1;

void enqueue(int ele)
{
    if (rear == 6 - 1)
    {
        printf("Queue is full!!!\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = ele;

        printf("New element inserted in Queue: %d\n", ele);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Element Deleted from Queue: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty!!!\n");
    }
    else
    {
        printf("Queue elements: ");

        int i;
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    int choice;
    int ele;

    while (1)
    {
        printf("\n\n----- Queue Menu -----");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &ele);
                enqueue(ele);
                break;

            case 2:
                dequeue();
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