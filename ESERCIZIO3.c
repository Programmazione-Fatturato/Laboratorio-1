#include<stdio.h>

int main(){
    float raggio;
    float altezza;
    float volume;

    do{
        printf("Inserire raggio > 0 :\n");
        scanf("%f", &raggio);
        printf("Inserire altezza > 0 :\n");
        scanf("%f", &altezza);

    if (raggio <= 0 || altezza <= 0)
            printf("Valori di raggio o altezza non corretti.\n");

    } while(raggio <= 0 || altezza <= 0);

    volume = 3.14/3 * raggio * raggio * altezza;

    printf("Il volume è %f", volume);

    return 0;
}
