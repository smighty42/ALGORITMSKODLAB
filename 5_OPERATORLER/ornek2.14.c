#include <stdio.h>
int main()
{
    int A;

    printf("Bir A sayisi girin: ");
    scanf("%d",&A);
    if(A > 10)
    {
        printf("%s","Girilen bir rakam degildir");
    }

    return 0;

}