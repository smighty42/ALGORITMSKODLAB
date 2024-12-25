#include <stdio.h>
int main()
{
    int number1;
    int number2;
    int sonuc;
    
    printf("Birinci sayiyi girin: ");
    scanf("%d",&number1);
    printf("Ikinci sayiyi girin: ");
    scanf("%d",&number2);

    sonuc = number1 + number2;
    printf("sonuc: %d",sonuc);
}
