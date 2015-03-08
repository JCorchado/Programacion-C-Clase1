int cuenta_numero_letras(char cadena[],char letra)
{	
	contador=0;	

	for(int i=0;i<=cadena.lenght;i++){
		if(cadena[i]==letra)
			contador++;
	}
	return contador;
}
int compara_cadena(char *cadena1, char *cadena2)
{
	int resCompara=1;
	if(strcmp(cadena1,cadena2)!=0)//Si no es 0 -> no son IGUALES.
		res=0;
	return resCompara;
}
int tipo_de_letra(char letra)
{
	int resLetra;
	switch(letra)
		case 'a':
			resLetra=1;
		case 'c':
			resLetra=2;
		case 'e':
			resLetra=3;
		default:
			resLetra=0;
	return resLetra;
}
int primera_letra(char cadena[] , char letra)
{
	int posicionLetra=0;
	for(int i=0;i<=strlen(cadena);i++){
		if(cadena[i]=="letra"){
			posicionLetra=cadena[i];
			break;
		}
	}
	return posicionLetra;	
}
int cambia_letras(char cadena[],char letraOriginal,char letraCambiar)
{
	char resLetra;
	for(int i=0;i<=strlen(cadena);i++){
		if(cadena[i]=="letraOrginal")
			resLetra="letraCambiar";
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
