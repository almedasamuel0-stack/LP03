#include <stdio.h>
#define M 365

int main(){
   float temp[M], maior, menor, media, soma = 0.0f;
   int cont = 0;

   for (int i = 0; i < M; i++){
       printf("Digite a temperatura do dia %d: ", i + 1);
       scanf("%f", &temp[i]);
       soma += temp[i];
    }
   media = soma / M;
   maior = menor = temp[0];
   for (int i = 1; i < M; i++){
       if (temp[i] > maior)
           maior = temp[i];
       if (temp[i] < menor)
           menor = temp[i];
       if (temp[i] < media)
           cont++;
   }
   printf("Maior temperatura: %.1f\n", maior);
   printf("Menor temperatura: %.1f\n", menor);
   printf("Temperatura media: %.1f\n", media);
   printf("Dias abaixo da media: %d\n", cont);
}