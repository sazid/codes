#include <stdio.h>
void main() 
{
    int i;
    for (i = 1; i <= 25; i = i+1)
    {
        printf("%d ", i);

        if (i % 5 == 0)
        {
            printf("\n");
        }
    }

}

