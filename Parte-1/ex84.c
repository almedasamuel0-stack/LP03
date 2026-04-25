#include <stdio.h>
#define M 100
int main(){
    int a[M], b[M], soma[M];
    int n;
    printf("N (valor entre 1 e 100): ");
    scanf("%d",&n);
    while(n<1 || n>100){
        printf("N (valor entre 1 e 100): ");
        scanf("%d",&n);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        soma[i] = a[i] + b[i];
        printf("%d, ",soma[i]);
    }   
}