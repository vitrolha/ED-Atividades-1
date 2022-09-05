#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main(void){

int vet[10],vet1[5],vet2[5];

int i,j,k=0,l;

srand(time(NULL));

for(i=0;i<5;i++){
    vet1[i]=rand()%20;
    vet2[i]=rand()%20;
}

for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(vet1[i]==vet2[j]){
            printf("%d, %d, ",vet1[i],vet2[j]);
            vet[k]=vet1[i];
            k++;
        }
    }
}
printf("\n");
for(i=0;i<k;i++){
    printf("%d, ",vet[i]);
}

}
