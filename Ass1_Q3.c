#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of an array: \n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements in an array: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        else if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Smallest element in an array is: %d", smallest);
    printf("\nLargest element in an array is: %d", largest);

    return 0;
}

/*
Output:
Enter size of an array:
5
Enter 5 elements in an array:
36
12
-65
0
36514
Smallest element in an array is: -65
Largest element in an array is: 36514
*/