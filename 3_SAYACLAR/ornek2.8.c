#include <stdio.h>
int main ()
{
    int S = 0;
    int A;
    while(1)
    {
        printf("A sayisini girin: ");
        scanf("%d", &A);
        S = S + 1;

        if(A == 0)
        {
            printf("%d",S);
            return 0;
        }
    }

}