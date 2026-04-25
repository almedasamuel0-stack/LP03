#include <stdio.h>
#define M 20

int main(){
    float vet[M], a1;
    for(int i=0; i<M; i++){
        printf("Digite o valor: ");
        scanf("%f", &vet[i]);
    }
    for (int i = 0; i < M; i++){
        for (int j = i + 1; j < M; j++){ 
            if (vet[i] < vet[j]){
                a1 = vet[i];
                vet[i] = vet[j];
                vet[j] = a1;
            }
        }
    }
    printf("\nDecrescente: ");
    for(int i = 0; i < M; i++) {
        printf("%.1f  ", vet[i]);
    }
}