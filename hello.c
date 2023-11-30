#include <stdio.h>
int main()
{
    printf ("Hello, WOrld\n");

    int i, j, n=7;
    for (i=0, i<=n, i++)
    {
        for (j=0, j<=i, j++)
        {
            printf ("**");
        }
        printf ("\n");
    }
}