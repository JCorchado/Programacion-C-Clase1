#include "utils.h"
#include <string.h>

int cuenta_numero_letras(char cadena[],char letra)
{	
	int contador=0;	
	int i;
	for(i=0;i<=strlen(cadena);i++){
		if(cadena[i]==letra)
			contador++;
	}
	return contador;
}
int compara_cadena(char *cadena1, char *cadena2)
{
	int resCompara=1;
	if(strcmp(cadena1,cadena2)!=0)//Si no es 0 -> no son IGUALES.
		resCompara=0;
	return resCompara;
}
int tipo_de_letra(char letra)
{
	int resLetra;
	switch(letra){
		case 'a':
			resLetra=1;
			break;
		case 'c':
			resLetra=2;
			break;
		case 'e':
			resLetra=3;
			break;
		default:
			resLetra=0;
		}
	return resLetra;
}
int primera_letra(char cadena[] , char letra)
{	
	int i;
	int posicionLetra=0;
	for(i=0;i<=strlen(cadena);i++){
		if(cadena[i]==letra){
			posicionLetra=i;
			break;
		}
	}
	return posicionLetra;	
}
int cambia_letras(char cadena[],char letraOriginal,char letraCambiar)
{	
	int i;	
	for(i=0;i<=strlen(cadena);i++){
		if(cadena[i]==letraOriginal)
			cadena[i]=letraCambiar;
	}
	
}
int suma_numeros(int n,int m)
{
	return n+m;
}
int resta_numeros(int n,int m)
{
	return n-m;
}
int multiplica_numeros(int n,int m)
{
	return n*m;
}
