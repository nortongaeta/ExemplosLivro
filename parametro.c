#include "stdio.h"

int main(int argc, char* argv[])
{

printf ("Imprime argumento\n\n");

// só aceita um parâmetro no máximo
//

if (argc>=2)
{
	printf (">>>> %s <<<<\n", argv[1]);
}
else
{
	printf ("\nSem parâmetros.\n"); 
}
return 0;

}

