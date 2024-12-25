#include <stdio.h>
int main()
{
    float PI =3.14;
    int r;
    float sonuc;

    printf("r sayisini oku: ");
    scanf("%d",&r);
    
    sonuc = PI * (r * r);
    printf("%f",sonuc);

}