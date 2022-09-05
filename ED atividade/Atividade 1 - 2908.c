#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(void){
    int vet[10],vetimp[10],vetpar[10];

    int i,k=0,j=0;
    int par=0,imp=0;

    for(i=0;i<10;i++){
        printf("Digite o %d valor: ",i+1);
        scanf("%d",&vet[i]);
    }

    for(i=0;i<10;i++){
        if(vet[i]%2==0){
            vetpar[j]=vet[i];
            j++;
        }
        else{
            vetimp[k]=vet[i];
            k++;
        }
    }

    printf("Pares: ");
    for(i=0;i<j;i++){
        printf("%d, ",vetpar[i]);
    }
    printf("Impar: ");
    for(i=0;i<k;i++){
        printf("%d, ",vetimp[i]);
    }

}
