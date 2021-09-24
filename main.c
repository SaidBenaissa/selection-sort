#include "main.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int data[], int length)
{

    /* code */
    for (int i = 0; i < length - 1; i++)
    {
        int min_idx = i;

        /* code */
        for (int j = i + 1; j < length; j++)
        {
            if (data[j] < data[min_idx] /* condition */)
            {
                /* code */
                min_idx = j;
            }
            swap(&data[min_idx], &data[j]);
        }
    }
}

int main()
{
    int data[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = sizeof(data) / sizeof(data[0]);
    selectionSort(data, length);
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", data[i]);
    }
}