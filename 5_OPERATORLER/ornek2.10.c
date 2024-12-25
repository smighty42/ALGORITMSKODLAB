#include <stdio.h>
#include <math.h>
int main()
{
    int a = 2;
    int b = 10;
    float x,y,z,q,w,p;
    x = a + b;
    y = a * b;
    z = a - b;
    q = a / b;
    w = pow(a,b);
    p = b % a;
    printf("%f\n%f\n%f\n%f\n%f\n%f\n",x,y,z,q,w,p);
    return 0;
}