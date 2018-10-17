
#include "stdio.h"

// no linux EOF pode ser entrada no terminal com CTRL+D
// note que EOF já esta definida nas bibliotecas
//
// esta é a versão 2 resumida
//

int main()
{
	int c;

	printf ("\nVersão 2\n");
	//c=getchar();

	while ( (c=getchar() )!= EOF){
		putchar(c);
		//c = getchar();
	}

}
		



