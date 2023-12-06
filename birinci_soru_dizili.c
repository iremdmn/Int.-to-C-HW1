#include <stdio.h>

int main()
{
    int i;
    int j;

    char ankara[]= {'a','n','k','a','r','a'};

    for(i=1;i<7;i++){
        for(j=0;j<i;j++){
        printf("%c",ankara[j]);
        }
        printf("\n");

    }
    for(i=5;i>0;i--){
        for(j=0;j<i;j++){
            printf("%c",ankara[j]);
        }
        printf("\n");
    }
}
