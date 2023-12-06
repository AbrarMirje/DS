#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of an array:\n");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements in an array: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble sort
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Binary Search
    int targetElement;
    printf("\nEnter which element do you want?\n");
    scanf("%d", &targetElement);

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (targetElement == arr[mid])
        {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (targetElement < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    printf("Element not found");

    return 0;
}

/*
Output:
Enter size of an array:
6
Enter 6 elements in an array:
125
-96
3254
0
1
236
Sorted array in ascending order:
-96 0 1 125 236 3254
Enter which element do you want?
-96
Element found at index 0
*/