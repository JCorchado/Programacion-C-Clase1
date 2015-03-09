#include "utils.h"
#include <assert.h>

static int test1(void)
{
	int i,j,k;

	i=cuenta_numero_letras("que guapo esta el c",'a');
	assert(i==2);

        j=compara_cadena("hola que dise","hola que dise");
        assert(j==1);

        k=tipo_de_letra('a');
        assert(k==1);

}

static int test2(void)
{
	int i,j;
	i=primera_letra("holaa",'o');
	assert(i==1);//no es uno?

	j=suma_numeros(8,2);
	assert(j==10);

}

static int test3(void)
{
	int i,j;
	i=resta_numeros(6,1);
	assert(i==5);
	j=multiplica_numeros(10,10);
	assert(j==100);
}
void main(void)
{	
	char cadena[80]="hola";
	int cambiaRes;	
	test1();
	test2();
	test3();
	
	printf("%s",cadena);
	cambiaRes=cambia_letras(cadena,'h','o');
	printf("%s",cadena);
}
