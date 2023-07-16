// WAP TO IMPLEMENTATION OF MERGE SORT
#include <stdio.h>
int main()
{
    int a[5], b[5], c[5], i, j, k, temp;
    printf("\nEnter value in first array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter value in second array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\n Merge Sort:");
    printf("\n First Array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\n Second Array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", b[i]);
    }
    for (i = 1; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = j = k = 0; i < 10;)
    {
        if (a[j] <= b[k])
            c[i++] = a[j++];
        else
            c[i++] = b[k++];
        if (j == 5 || k == 5)
            break;
    }
    for (; j <= 4;)
        c[i++] = a[j++];
    for (; k <= 4;)
        c[i++] = b[k++];
    printf("\n\nArray After softing:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", c[i]);
    }
    return 0;
}
