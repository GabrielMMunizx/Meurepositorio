#include <stdio.h>
#include <stdlib.h>


main()
{
float t,m;
int c=0;

printf("Digite o valor da massa: ");
scanf("%f", &m);

while(m > 0.10)
{
m = (m*1.45);
t++;
}
t = t*20;
printf("%d", t);
getch();
}
