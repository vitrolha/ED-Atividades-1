#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main(void){

int mat[4][4];

int i,j,maior, menor,linha,coluna,linhamenor,colunamenor;

srand(time(NULL));

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        mat[i][j]=rand()%50;
    }
}

printf("\n");

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("Elemento [%d][%d] = [%d]\n",i,j,mat[i][j]);

    }
}
printf("\n");

maior = mat[0][0];
menor=mat[0][0];

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(mat[i][j]>maior){
            maior=mat[i][j];
            linha = i;
            coluna=j;
        }

    }
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(mat[i][j]<menor){
            menor = mat[i][j];
            linhamenor = i;
            colunamenor =j;
        }
    }
}


printf("maior: %d\n",maior);
printf("linha e coluna: [%d], [%d]\n",linha,coluna);
printf("menor: %d\n",menor);
printf("linha e coluna: [%d], [%d]",linhamenor,colunamenor);
}


