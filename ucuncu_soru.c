#include <stdio.h>
#include <stdlib.h>

int main(){
    float toplam=0;
    float sayi=1;
    float sayi1=1;
    float sayi2=2;

    for(sayi=1;sayi<=5000;sayi++){
        toplam+=1/(sayi1*sayi2);
        sayi1++;
        sayi2++;
    }
    printf("%f",toplam);
    return ;
}
