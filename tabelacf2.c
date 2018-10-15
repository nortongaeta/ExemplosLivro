// mesmo resultado do anterior mas usando for

#include "stdio.h"

#define INICIO 0 /* valor inicial */
#define FIM 300 /* valor final */
#define INCR 20 /* incremento */

int main()
{

	int fahr;

	printf ("\n exemplo usando -for- e com constantes \n");
	for (fahr = INICIO; fahr <= FIM; fahr = fahr + INCR)
		printf ("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32) ) ;

}
