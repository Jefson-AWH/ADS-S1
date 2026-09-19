#include<stdio.h>
void main()
{
    int a[10], b[10], c[20];
    int n, m;
    int i, j, k;
    printf("enter the size of first array: ");
    scanf("%d", &n);
    printf("enter the elements of first array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the size of second array: ");
    scanf("%d", &m);
    printf("enter the elements of second array:\n");
    for(i=0; i<m; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<n -1; i++)
    {
        for(j=i + 1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0; i < m -1; i++)
    {
        for(j=i + 1; j<m; j++)
        {
            if(b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("\nfirst sorted array: ");
    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\nsecond sorted array: ");
    for(i=0; i<m; i++)
    {
        printf("%d", b[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n && j<m)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j<m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("\nmerged sorted array: ");
    for(i=0; i<n + m; i++)
    {
        printf("%d", c[i]);
    }
}
