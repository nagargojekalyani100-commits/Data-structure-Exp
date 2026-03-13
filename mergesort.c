#include <stdio.h>

int main()
{
    int A[50], B[50], C[100];
    int NA, NB, i=0, j=0, k=0;

    printf("Enter number of elements in array A: ");
    scanf("%d", &NA);

    printf("Enter elements of sorted array A:\n");
    for(i=0;i<NA;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter number of elements in array B: ");
    scanf("%d",&NB);

    printf("Enter elements of sorted array B:\n");
    for(j=0;j<NB;j++)
    {
        scanf("%d",&B[j]);
    }

    i=0;
    j=0;
    k=0;

    while(i<NA && j<NB)
    {
        if(A[i] < B[j])
        {
            C[k] = A[i];
            i++;
        }
        else
        {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    while(i<NA)
    {
        C[k] = A[i];
        i++;
        k++;
    }

    while(j<NB)
    {
        C[k] = B[j];
        j++;
        k++;
    }

    printf("Merged Array:\n");
    for(i=0;i<NA+NB;i++)
    {
        printf("%d ",C[i]);
    }

    return 0;
}