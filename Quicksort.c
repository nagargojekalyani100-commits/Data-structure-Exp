#include <stdio.h>

int partition(int A[], int BEG, int END)
{
    int left = BEG, right = END;
    int pivot = A[BEG];
    int temp;

    while (left < right)
    {
        while (A[left] <= pivot && left < END)
            left++;

        while (A[right] > pivot)
            right--;

        if (left < right)
        {
            temp = A[left];
            A[left] = A[right];
            A[right] = temp;
        }
    }

    A[BEG] = A[right];
    A[right] = pivot;

    return right;
}

void quicksort(int A[], int N)
{
    int LOWER[50], UPPER[50];
    int TOP = -1;
    int BEG, END, LOC;

    TOP++;
    LOWER[TOP] = 0;
    UPPER[TOP] = N - 1;

    while (TOP != -1)
    {
        BEG = LOWER[TOP];
        END = UPPER[TOP];
        TOP--;

        LOC = partition(A, BEG, END);

        if (BEG < LOC - 1)
        {
            TOP++;
            LOWER[TOP] = BEG;
            UPPER[TOP] = LOC - 1;
        }

        if (LOC + 1 < END)
        {
            TOP++;
            LOWER[TOP] = LOC + 1;
            UPPER[TOP] = END;
        }
    }
}

int main()
{
    int A[50], N, i;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter elements:\n");
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    quicksort(A, N);

    printf("Sorted array:\n");
    for (i = 0; i < N; i++)
        printf("%d ", A[i]);

    return 0;
}
