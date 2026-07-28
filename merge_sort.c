#include <stdio.h>

// Merge Function
void merge(int arr[], int start, int mid, int end)
{
    int i, j, k;

    int sizeL = mid - start + 1;
    int sizeR = end - mid;

    int L[sizeL], R[sizeR];

    // Copy elements to Left Array
    for(i = 0; i < sizeL; i++)
        L[i] = arr[start + i];

    // Copy elements to Right Array
    for(j = 0; j < sizeR; j++)
        R[j] = arr[mid + 1 + j];

    i = 0; // left array
    j = 0; //right array
    k = start; // for merged array

    // Merge the temporary arrays
    while(i < sizeL && j < sizeR)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++; //increase left array index
        }
        else
        {
            arr[k] = R[j];
            j++; //increase right array index
        }
        k++; //increase merged array index
    }

    // Copy remaining elements of Left Array
    while(i < sizeL)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of Right Array
    while(j < sizeR)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort Function
void mergeSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int mid = (start + end) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);  //combine all array elements
    }
}

// Print Function
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
//	int arr[]={8,7,6,5,2};
//	int size=sizeof(arr)/sizeof(arr[0]);

    int arr[100], size, i;

    printf("Enter the array size: ");
    scanf("%d", &size);

    printf("Enter the array elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array:\n");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("\nSorted Array:\n");
    printArray(arr, size);

    return 0;
}