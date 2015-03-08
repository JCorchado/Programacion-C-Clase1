#include <stdio.h>
#include <string.h>
i
//Pre: Entra una letra
//Post: Devolver un 1 si la letra es una letra 'a'. Si no, devolver 0.
tipo_de_dato es_una_A(char letra)
{
	int resultadoA=0;
	if(letra=='a')
		resultadoA=1;
	
	return resultadoA;
}

tipo_de_dato main()
{
	int i;
	char cadena[40] = "Hola dola pepsi cola\n";

	for (i = 1; i < strlen(cadena); i++) {
		if (es_una_A(cadena[i]))
			printf("En la posición %d tenemos una letra 'a'\n", i);
	}
}
