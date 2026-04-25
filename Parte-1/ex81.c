#include <stdio.h>
#define V 21
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    float Q[V], soma=0, menor=0;
    int cont=0;
    for (int i=0;i<V; i++){
        do{
            printf("Digite um valor positivo: ");
            scanf("%f", &Q[i]);
            if (Q[i]<0)
                printf("Digite o valor novamente!");
        } while (Q[i]<0);
        if (Q[i]<menor || i == 0){
            menor = Q[i];
            cont = i;
        } 
    }
    printf("Os valores de Vetor são:\n");
    for (int i = 0; i < V; i++)
            printf("Q[%d] = %.1f\n", i, Q[i]);
    printf("O menor valor do vetor é: %.1f e sua posição é %.1d", menor, cont);
}