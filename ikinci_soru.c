#include <stdio.h>
#include <stdlib.h>

int main()
{
    float terim;
    float terim_sonuc;
    float terimler_toplam=0;

    for(terim=1;terim<=50;terim++){
        terim_sonuc=1/terim;
        terimler_toplam+=terim_sonuc;

    }printf("%f",terimler_toplam);

}
