#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of an array: \n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements in an array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

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
    printf("Array in sorted in ascending order:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Output:
Enter size of an array:
7
Enter 7 elements in an array:
25
963
-954
0
254
368
12
Array in sorted in ascending order:
-954 0 12 25 254 368 963
*/