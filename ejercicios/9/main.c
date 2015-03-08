#include<stdio.h>
#include<assert.h>
#include"utils.h"

static int test1(void)
{
	int i,j,k;
	i=cuenta_numero_letras();
	assert(i==0);
        j=compara_cadena();
        assert(j==0);

        k=tipo_de_letra();
        assert(k==0);

}

static int test2(void)
{
	int i,j;
	i=primera_letra();
	assert(i==0);
	j=suma_numeros();
	assert(j==0);
}

static int test3(void)
{
	int i,j;
	i=resta_numeros();
	assert(i==0);
	j=multiplica_numeros();
	assert(j==0);
}
void main(void)
{
	test1();

	test2();

	test3();
}
