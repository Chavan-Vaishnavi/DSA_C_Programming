#include <stdio.h>

// Bubble Sort Function
void bubbleSort(int arr[], int size)
{
    int i, j, temp;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Print Array Function
void printArray(int arr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100], size, i;

    printf("Enter The Array Size: ");
    scanf("%d", &size);

    printf("Enter The Array Elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("Sorted Array: ");
    printArray(arr, size);

    return 0;
}
