#include <stdio.h>
int main ()
{
    int S = 0;
    int T = 0;
    int A;
  
        while(S<10)
        {
        printf("A sayisini girin: ");
        scanf("%d", &A);
        S = S + 1;
        T = T + A;
        }
        if(S>9)
        {
            printf("%d\n",S);
            printf("%d",T);
            return 0;
        }

}