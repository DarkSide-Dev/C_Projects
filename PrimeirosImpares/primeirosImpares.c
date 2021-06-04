#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[10];
    int i = 0;
    int count = 1;

    while(i != 10){

        if(count % 2 != 0){

            num[i] = count;

            i++;

        }

        count++;

    }

    for(i = 0; i < 10; i++){

        printf("%d\n", num[i]);

    }


}