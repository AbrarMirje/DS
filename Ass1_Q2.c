#include <stdio.h>
int main()
{
    int targetElement;
    int arr[10];
    printf("Enter 10 elements in an array: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter targeted element: \n");
    scanf("%d", &targetElement);

    for (int i = 0; i < 10; i++)
    {
        if (targetElement == arr[i])
        {
            printf("Element found at %d index", i);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}

/*
Output:
Enter 10 elements in an array:
258
639
-965
023
648
512
-698
21
25
369
Enter targeted element:
21
Element found at 7 index
*/