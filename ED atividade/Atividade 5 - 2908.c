#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int main(void){

int mat[5][3],vetmaior[3][5],maior,menor=100000000,vetmenor[5][3];

int i,j,k=0;

srand(time(NULL));

for(i=0;i<5;i++){
    for(j=0;j<3;j++){
        mat[i][j]=rand()%11;
    }
}

maior = mat[0][0];

for(i=0;i<5;i++){
    printf("Jogador %d\n",i+1);
    for(j=0;j<3;j++){
        printf("%d- [%d] ",j+1,mat[i][j]);
    }
    printf("\n");
}

for(k=0;k<3;k++){
    maior = 0;
    for(i=0;i<5;i++){
    if(mat[i][k]>maior){
        maior = mat[i][k];
    }
    vetmaior[k][i]=maior;
    }

    printf("Maior: ");


    //for(i=0;i<5;i++){
    
    //    printf("%d, ",vetmaior[k][i]);
        
    //}

    //maior1=vetmaior[i-1];

    printf("Aparelho %d, maior nota: [%d]\n",k+1,vetmaior[k][i-1]);

}

for(i=0;i<5;i++){
    menor=100000;
    for(j=0;j<3;j++){
        if(mat[i][j]<menor){
            menor=mat[i][j];
        }
    vetmenor[i][j]=menor;

    }

printf("Menor: ");

//for(j=0;j<3;j++){
//    printf("%d, ",vetmenor[i][j]);
//}

printf("Atleta %d, menor nota: [%d]\n",i+1,vetmenor[i][j-1]);


}
    

}
