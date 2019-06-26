#include <stdio.h>
#include <stdlib.h>


int value[] = {40, 100, 50, 69, 25, 70};

int compare (const void * a, const void * b)
{
    return( *(int*)a - *(int*)b );
}

int main()
{
    int n;
    qsort(value, 6, sizeof(int), compare);
    for (n = 0; n < 6; n++)
        printf("%d", value[n]);

    return 0;
}