#include<stdio.h>

int main(){
    int i;
    int j;
    int siraSayi;
    char karakter;

    printf("satir sayisi ve sekli giriniz:");
    scanf("%d %c",&siraSayi,&karakter);

    for(i=1;i<=siraSayi;i++){
        for(j=1;j<=siraSayi-i;j++){
            printf(" ");
        }for(j=1;j<=2*i-1;j++){
            printf("%c",karakter);
        }printf("\n");
    }
    for(i=1;i<=siraSayi;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }for(j=1;j<=(2*siraSayi-2*i-1);j++){
            printf("%c",karakter);
        }printf("\n");
    }
}
