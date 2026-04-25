#include <stdio.h>
#define A 4
int main(){
    float vet[A], media, soma=0;
    int cont01=0;
    for (int i=1; i<A; i++){
        printf("Digite a nota do aluno: ");
        scanf("%f", &vet[i]);
        soma+=vet[i];
    }
    media=soma/A;
    for (int i = 0; i<A; i++){
        if (vet[i]>media){
            cont01++;
        }
    }
    printf("A media da turma foi de %.1f\n", media);
    printf ("O valor de estudantes acima da media foi de:%.1d\n", cont01);
    printf("A soma dos valores contados foi de: %.1f", soma);
}