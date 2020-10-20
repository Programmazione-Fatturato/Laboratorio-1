#include <stdio.h>

int main(){
    //Dichiarazione variabili
    int n;
    int q = 0;
    int i = 0;

    //Acquisizione di N
    do{
        printf("Inserire numero n > 0 :\n");
        scanf("%d", &n);

        if (n <= 0)
            printf("Valore di n non corretto.\n");

    } while (n <= 0);

    //Verifichiamo che N è quadrato perfetto di Q

 while (q < n)
      {
        q = i*i;
        i++;
      }
 

 if (q == n)
 printf("%d è quadrato perfetto", n);

 if (q != n)
 printf("%d non è quadrato perfetto", n);

    return 0;

}
