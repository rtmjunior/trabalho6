/*
* Arquivo: mediaimpares.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 15/01/2022
*/

#include  <stdio.h>
#include  <stdlib.h>


typedef
    longo  longo  int 
li;

lli significa ( int * vetor, int num);


int  principal ( vazio ){
    int num, inicial;
    printf ( " Entre com um numero: " );
    scanf ( " %d%*c " , &num);
    printf ( " Meu nome inicial: " );
    scanf ( " %d%*c " , &inicial);

    if (!(inicial% 2 )) inicial ++;

    int * vetor = ( int *) malloc ( sizeof ( int )*(num));

    for ( int i = 0 ; i< num; i++) vetor[i] = inicial+ i* 2 ;

    printf ( " Penúltimo %d \t " , vetor[num- 2 ]);
    printf ( " Mídia %d \n " , média (vetor, num));

    
    grátis (vetor);
    retorna  0 ;
}

lli significa ( int * vetor, int num){
    llisoma = 0 ;
    for ( int i = 0 ; i< num; i++) soma += vetor[i];
    retornar soma/num;
}