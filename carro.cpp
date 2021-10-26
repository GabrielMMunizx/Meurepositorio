#include <stdio.h>

#include <stdlib.h>

main(){

float custo;

printf("Digite o custo de fabrica do carro: R$ ");

scanf("%f", &custo);

custo = custo * 1.42 * 1.25;

printf("\n\nCusto do carro ao consumidor: R$ %.2f", custo);

system("pause>nul");

}
