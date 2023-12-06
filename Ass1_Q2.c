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