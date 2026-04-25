#include <stdio.h>
#include <windows.h>
#define A 11
#define M 11
int main(){
    SetConsoleOutputCP(CP_UTF8);
    float X, vet01[A], vet02[M], valor;
    for (int i = 0; i<A; i++){
        printf("Digite o valor de X: ");
        scanf("%f", &X);
        printf("Digite um valor para o vetor:  ");
        scanf("%f", &vet01[i]);
        vet02[i]=vet01[i]*X;
    }
    printf("Os valores de Vetor são:\n");
    for (int i = 0; i < M; i++)
            printf("M[%d] = %.1f\n", i, vet02[i]);
}