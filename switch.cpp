#include <stdio.h>

#include <stdlib.h>

// meses

int main()

{

int mes;

char n[2];

mes = 0;

while ((mes < 1) || (mes > 12))

//while para aceitar numeros entre 1 e 12

// ||-> da ideia de "ou"

{printf ("\nDigite o numero do m�s\n");

scanf ("%s", n);

mes = atoi(n);

// atoi em numeros inteiros

}

switch (mes)

{

case 1:

printf("\nO mes de janeiro \n");

break;

case 2:

printf("\nO mes de Fevereito \n");

break;

case 3:

printf("\nO mes de Mar�o \n");

break;

case 4:

printf("\nO m�s de Abril \n");

break;

case 5:

printf("\nO m�s de Maio \n");

break;

case 6:

printf("\nO m�s de Junho \n");

break;

case 7:

printf("\nO m�s de Julho \n");

break;

case 8:

printf("\nO m�s de Agosto \n");

break;

case 9:

printf("\nO m�s de Setembro \n");

break;

case 10:

printf("\n O m�s de Outubro \n");

break;

case 11:

printf("\n O m�s de Novembro \n");

break;

case 12:

printf("\n O m�s de Dezembro \n");

break; }

return 0;}
