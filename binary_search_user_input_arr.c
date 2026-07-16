#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ele;
    printf("Enter element to search: ");
    scanf("%d", &ele);

    int low = 0;
    int up = n - 1;
    int mid;
    int flag = 0;

    while(low <= up)
    {
        mid = (low + up) / 2;

        if(a[mid] == ele)
        {
            flag = 1;
            break;
        }
        else if(a[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            up = mid - 1;
        }
    }

    if(flag == 1)
    {
        printf("Element found at index %d", mid);
    }
    else
    {
        printf("Element not found");
    }
}
