#include <stdio.h>
int main()
{
    int i, j, n, count;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count = 0;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    break;
                }
            }
            if (count == 0)
                printf("%d ", i);
        }

        // if (count == 0)
        // printf("%d ", i);
    }
}
