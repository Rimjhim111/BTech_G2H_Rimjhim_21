#include <stdio.h>
int main (){

    int a, b;
    printf("Enter two number \n");
    scanf("%d %d", &a, &b);

    if(a>b)
      {
        printf("greater number is %d",a);
      }

    else
      {
        printf("greater number is %d",b);
      }

      return 0;

}
