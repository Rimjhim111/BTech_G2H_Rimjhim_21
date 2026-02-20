
#include <stdio.h>

void main(){
    char a;
    printf("enter to check a character: ");
    scanf("%c",&a);
    if(a>='0' && a<='9'){
        printf("the given value is digit");
    }else if((a>='A' && a<='z')|| (a>='a' && a<='z')){
        printf("the given value is alphabet");
    }
     else {
        printf("the given value is special character");
    }
}