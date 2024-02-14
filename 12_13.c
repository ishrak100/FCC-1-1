#include <stdio.h>

void main()
{
    int i,x;
    scanf("%d",&x);

    while(x!=1)
        {
        for( i=2;i<=x;i++)
        {
            if(x%i==0)
            {
                x=x/i;
                printf("%d ",i);
                break;

            }
        }
    }

}
