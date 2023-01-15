/*
* Arquivo: golomb.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 15/01/2022
*/

#include  <stdio.h>
#include  <stdlib.h>

void  seq ( int * vetor, int n);


int  principal ( vazio ){

    int b,a,aux;
    printf ( " Forneca o inicio: " );
    scanf ( " %d " , &a);
    printf ( " Forneça o final: " );
    scanf ( " %d " , &b);
    se (b < a) { aux = a; a = b; b = a; }

    int * vec = ( int *) malloc ((b+ 1 )* sizeof ( int ));

    seq (vec, b+ 1 ); // b+1 pq são 11 termos
    int soma = 0 ; mídia dupla ;
    for ( int i = a; i<=b; i++){    
        soma += vec[i];
        // printf("%d ", soma);

    }
    média = ( duplo ) soma / (b-a+ 1 );

    printf ( " %d  %d  %lg \n " ,vec[a], vec[b], mídia);

    livre (vec);
    retornar  1 ;
}


void  seq ( int * vetor, int n){
    for ( int i = 0 ; i<n; i++){    
        se (i == 0 ){
            vetor[i] = 1 ;
        } senão {
            vetor[i] = 1 + vetor[i-vetor[vetor[i- 1 ]- 1 ]];
        }
    }
}