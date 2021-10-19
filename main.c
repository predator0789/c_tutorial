#include <stdio.h>
#include<conio.h>
void bubblesort(int arr[], int size)
{
    int i, j;
    clescr();
    for (i = 0;  i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);

        }
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int array[100], i, size;
    printf("Enter the size of array:-\n");
    scanf("%d", &size);
    printf("\nEnter %d elements of array:-\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    bubblesort(array, size);
    printf("\nSorted array is ");

    for (i = 0; i < size; i++)
        printf(" %d ", array[i]);
    return 0;
    printf("Thanks");

}
