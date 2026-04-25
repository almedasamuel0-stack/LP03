#include <stdio.h>
#define V 20
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    float Q[V], soma=0, maior=0;
    int cont=0;
    for (int i=0;i<V; i++){
        do{
            printf("Digite um valor positivo: ");
            scanf("%f", &Q[i]);
        } while (Q[i]<0);
    }
    for (int i=0;i<V;i++){
        if (maior < Q[i]){
            maior = Q[i];
            cont = i;
        }
    }
    printf("Os valores de Vetor são:\n");
    for (int i = 0; i < V; i++)
            printf("Q[%d] = %.1f\n", i, Q[i]);
    printf("O maior valor do vetor é: %.1f e sua posição é %.1d", maior, cont);
}