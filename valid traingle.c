// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("the traingle is equilateral");
    } else if(a==b && b==a){
        printf("the traingle is isoceles");
    } else {
        printf("the traingle  is scalene");
    }
    return 0;
}