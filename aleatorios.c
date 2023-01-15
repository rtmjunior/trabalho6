/*
* Arquivo: aleatorios.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 15/01/2022
*/

#include  <stdio.h>
#include  <stdlib.h>

int  principal ( vazio ){
    int n;

    printf ( " Passa um numero: " );
    scanf ( " %d%*c " , &n);
    srand (n);
    int * vec = ( int *) malloc (n* sizeof ( int ));

    for ( int i = 0 ; i< n; i++) vec[i] = rand ()%n;
    int máx = 0 ; int min = n+ 1 ; int soma = 0 ; mídia dupla ;

    for ( int i = 0 ; i< n; i++){
        if (vec[i]>max)
            max = vec[i];
        if (vec[i]< min)
            min = vec[i];

        soma += vec[i];
    }
    media = ( duplo ) soma / n;

    
    printf ( " %d  %d  %lf \n " , min, max, média);
    livre (vec);
    retornar  1 ;
}