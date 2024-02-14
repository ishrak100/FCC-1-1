#include <stdio.h>
int main()
{
  int n, i, j;

  scanf("%d", &n);
  for (i = 2; i <= n; i++)
  {
    int h = 0;
    for (j = 2; j < i; j++)
    {
      if (i % j == 0)
      {

        h = 1;
        break;
      }
    }

    if (h == 0)
    {
      printf("%d ", i);
    }
  }
}
