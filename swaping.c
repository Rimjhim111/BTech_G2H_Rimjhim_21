#include <stdio.h>
#include <math.h>
 int main()
 {
    float a,b,c;
    scanf("%f%f",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("A is swaps to B %f",a);
    printf("B is swaps to A %f",b);
    return 0 ;
 }