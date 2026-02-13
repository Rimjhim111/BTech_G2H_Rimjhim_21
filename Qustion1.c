#include<stdio.h>

 int main()
    {
        int a,b,c,d,e;
        float percentage;
        int sum;
        printf("enter marks of 5 subject");
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        sum = a+b+c+d+e;
        percentage=(sum*100)/500;
        printf("sum is %d",sum);
        printf("percentage is %f",percentage);
        return 0;
    }