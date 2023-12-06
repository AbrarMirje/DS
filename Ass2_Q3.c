#include <stdio.h>
int main()
{
    int size;
    int targetElement;
    int flag = 0;

    printf("Enter size of an array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements in an array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Which element do you want?\n");
    scanf("%d", &targetElement);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == targetElement)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}

/*
Output:
Enter size of an array:
6
Enter 6 elements in an array:
125
-9
364
24
0
1
Which element do you want?
24
Element found
*/