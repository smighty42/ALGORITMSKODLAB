#include <stdio.h>
int main()
{
    float KDV = 0.18;
    float ucret;
    float sonuc;

    printf("ucret sayisini oku: ");
    scanf("%f",&ucret);
    
    sonuc = KDV * ucret;
    printf("%f",sonuc);

}