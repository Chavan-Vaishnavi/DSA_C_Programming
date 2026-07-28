#include <stdio.h>

// Swap Function
void sort(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition Function
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start + 1;
    int j;

    for(j = start + 1; j <= end; j++)
    {
        if(arr[j] < pivot)
        {
            sort(&arr[i], &arr[j]);
            i++;
        }
    }

    sort(&arr[start], &arr[i - 1]);

    return (i - 1);
}

// Quick Sort Function
void quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int p;

        p = partition(arr, start, end);

        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

// Print Array Function
void printArray(int arr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

// Main Function
int main()
{
    int arr[100], size, i;

    printf("Enter The Array Size: ");
    scanf("%d", &size);

    printf("Enter The Array Elements: ");

    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("\nOriginal Array:\n");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    printf("Sorted Array:\n");
    printArray(arr, size);

    return 0;
}