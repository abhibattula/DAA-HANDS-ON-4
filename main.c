#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the sorted array elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    int newSize = 0;


    for (int i = 0; i < n; i++) {
        if (i == 0 || array[i] != array[i - 1]) 
        {
            array[newSize++] = array[i];
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) 
    {
        printf("%d ", array[i]);
    }
}
