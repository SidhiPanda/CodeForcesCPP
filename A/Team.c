#include <stdio.h>

int main()
{
    int c = 0, n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        int A[3];
        int p = 0;

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[j]);
            if (A[j] == 1)
            {
                p = p + 1;
            }
        }

        if (p >= 2)
        {
            c = c + 1;
        }
    }

    printf("%d", c);

    return 0;
}