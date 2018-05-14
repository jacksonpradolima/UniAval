#include <stdio.h>
#include <stdlib.h>
void lervetor(int *v, int tam){
    int i;
    for (i=0; i<tam; i++){
        scanf("%d", &v[i]);
    }
}
void maiormenor(int *v, int tam, int* maior, int* menor){
    int i;
    *maior = v[0];
    *menor = v[0];
    for (i=1;i<tam;i++){
        if (v[i] > *maior){
            *maior = v[i];
        }
        if (v[i] < *menor){
            *menor = v[i];
        }
    }
}
int main (){
    int n;
    int *vet = NULL;
    int maior;
    int menor;
    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);
    vet = (int*) malloc (n * sizeof(int));
    lervetor(vet, n);
    maiormenor(vet, n, &maior, &menor);
    printf("O maior valor informado foi: %d\n", maior);
    printf("O menor valor informado foi: %d\n", menor);
    return 0;
}