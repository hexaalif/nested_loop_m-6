#include <stdio.h>

int main()
{
    int in;
    scanf("%d", &in);
    for (int i = 1; i <= 12; i++)
    {
        int res = i * in;
        printf("%d * %d = %d\n", in, i, res);
    }

    return 0;
}