#include <stdio.h>

int main()
{
    int v1, v2;
    printf("Valor 1:");
    scanf("%d", &v1);
    printf("Valor 2:");
    scanf("%d", &v2);

    if(v1 == v2){
        printf("Os valores %d e %d s�o iguais.", v1, v2);
    }   
    else {
        printf("Os valores %d e %d s�o diferentes.", v1, v2);
        if(v1 > v2){
            printf("\nO maior valor �: %d e o menor �: %d.", v1, v2);
        }
        else{
            printf("\nO maior valor �: %d e o menor �: %d.", v2, v1);
        }
    }
}
