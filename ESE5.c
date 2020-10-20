#include<stdio.h>
#include<math.h>

int main(){
	int n; //base 
	int k; //esponente
	int i; //contatore 
	int pot; //comodo

	do{
		printf("Inserire n > 0 :\n");
		scanf("%d", &n);
		printf("Inserire k > 0 :\n");
		scanf("%d", &k);

		if (n <= 0 | k <= 0)
			printf("Valore di n o di k non validi.\n");

	} while (n <= 0 | k <= 0);

	for (i=1; i<k+1; i++)
	{
		pot = pow(n, i);
		printf("Il risultato è : %d\n", pot);
	}

	return 0;
}
