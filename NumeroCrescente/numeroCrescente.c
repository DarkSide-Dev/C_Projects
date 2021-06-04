#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 0;
    int b = 0;
    int c = 0;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        if(b > c){
            printf("%d %d %d", c, b, a);
        }
        else{
            printf("%d %d %d", b, c, a);
        }
    }
    else if(b > a && b > c){
        if(a > c){
            printf("%d %d %d", c, a, b);
        }
        else{
            printf("%d %d %d", a, c, b);
        }
    }
    else{
        if(b > a){
            printf("%d %d %d", a, b, c);
        }
        else{
            printf("%d %d %d", b, a, c);
        }
    }

}