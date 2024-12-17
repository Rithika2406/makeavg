#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); 

    while (t--)
    {
        int A, B, C;
        scanf("%d %d", &A, &C); 
        if((A+C)%2==0)
        {
            B=(A+C)/2;
            printf("%d\n",B);
        }
        else
        {
        printf("-1\n",B);
        }
        

    }

    return 0;
}