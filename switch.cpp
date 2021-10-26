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

{printf ("\nDigite o numero do mês\n");

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

printf("\nO mes de Março \n");

break;

case 4:

printf("\nO mês de Abril \n");

break;

case 5:

printf("\nO mês de Maio \n");

break;

case 6:

printf("\nO mês de Junho \n");

break;

case 7:

printf("\nO mês de Julho \n");

break;

case 8:

printf("\nO mês de Agosto \n");

break;

case 9:

printf("\nO mês de Setembro \n");

break;

case 10:

printf("\n O mês de Outubro \n");

break;

case 11:

printf("\n O mês de Novembro \n");

break;

case 12:

printf("\n O mês de Dezembro \n");

break; }

return 0;}
