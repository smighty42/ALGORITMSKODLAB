#include <stdio.h>
int main()
{
    int A;
    int B;

    printf("A sayisini giriniz: ");
    scanf("%d", &A);
    printf("B sayisini giriniz: ");
    scanf("%d", &B);

    if(A == B)
        printf("Girilen sayilar birbirine esittir\n");
    if(A != B)
        printf("Girilen sayilar birbirine esit degildir\n");    
    if(A > B)
        printf("A sayisi B sayisindan buyuktur\n");
    if(A >= B)
        printf("A sayisi B sayisindan buyuk ya da esittir\n");
    if(A < B)
        printf("B sayisi A sayisindan buyuktur\n");
    if(A <= B)
        printf("B sayisi A sayisindan buyuk ya da esittir\n");

    return 0;
}