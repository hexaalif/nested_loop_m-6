#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    int arrayName[] = {1, 2, 3};
    printf("%d", arrayName[3]);
    printf("\n");
    return 0;
}