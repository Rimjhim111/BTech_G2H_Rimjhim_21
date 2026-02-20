// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char op;
    int a,b,result;
    printf("enter an operator : ");
    scanf("%c",&op);
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    if(op == '+'){
        result=a+b;
        printf("%d",result);
    } else if (op == '-' ){
        result = a-b;
        printf("%d",result);
    }else if (op == '*'){
        result = a*b;
        printf("%d",result);
    }else if (op == '/'){
         result = a/b;
        printf("%d",result);
    }else {
        printf("invalid operator");
    }
     return 0;
    
}