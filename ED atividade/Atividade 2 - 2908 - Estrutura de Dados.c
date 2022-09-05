#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(void){
int resp;
do{
    //vetores
int vet[10],vet1[5],vet2[5];



//variaveis do metodo bolha
int i,j,k,l;



srand(time(NULL));
for(i=0;i<5;i++){
    vet1[i]=rand()%50;
    vet2[i]=rand()%50;
}

for(i=0;i<5;i++){
    for(j=0;j<5-i-1;j++){
        if(vet1[j]>vet1[j+1]){
            k=vet1[j];
            vet1[j]=vet1[j+1];
            vet1[j+1]=k;
        }
    }
}

for(i=0;i<5;i++){
    for(j=0;j<5-i-1;j++){
        if(vet2[j]>vet2[j+1]){
            k=vet2[j];
            vet2[j]=vet2[j+1];
            vet2[j+1]=k;
        }
    }
}

for(i=0;i<5;i++){
    printf("%d, ",vet1[i]);
}
printf("\n");

for(j=0;j<5;j++){
    printf("%d, ",vet2[j]);
}

printf("\n");

memcpy(vet,vet1,sizeof(vet1));
memcpy(vet+(sizeof(vet1)/sizeof(int)),vet2,sizeof(vet2));

for(i=0;i<10;i++){
    for(j=0;j<10-i-1;j++){
        if(vet[j]<vet[j+1]){
            k=vet[j];
            vet[j]=vet[j+1];
            vet[j+1]=k;
        }
    }
}

printf("\n");

for(i=0;i<10;i++){
 printf("%d, ",vet[i]);
}


printf("\n\n1 ou 2: ");
scanf("%d",&resp);

//do
}while(resp==1);

}
