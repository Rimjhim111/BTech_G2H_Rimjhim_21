// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int math,sci,eng,comp,SS,sum;
    float percentage;
    printf("enter the marks of math:\n");
    scanf("%d",&math);
    printf("enter the marks of sci:\n");
    scanf("%d",&sci);
    printf("enter the marks of eng:\n");
    scanf("%d",&eng);
    printf("enter the marks of Comp:\n");
    scanf("%d",&comp);
    printf("enter the marks of SS:\n");
    scanf("%d",&SS);
    sum = math+sci+eng+comp+SS;
    percentage = (sum*100)/500;
    if(percentage>= 90 && percentage <=100){
        printf("A");
    }else if (percentage>= 80 && percentage <=90 ){
        printf("B");
    }else if (percentage>= 60 && percentage <=80){
        printf("c");
    }else {
        printf("D");
    }
}