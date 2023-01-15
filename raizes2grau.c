/*
* Arquivo: raizes2grau.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 15/01/2022
*/

#include  <stdio.h>
#include  <math.h>

int  raizes ( float * a, float * b, float * c, float * x1, float * x2);


int  principal ( vazio ){
    flutuar a, b, c, x1, x2;
    printf ( " Digite os coordenadores da equacao(abc): " );
    scanf ( " %f  %f  %f%*c " , &a, &b, &c);
    int n = raízes (&a,&b,&c,&x1, &x2);
    se (n == 2 ){
        printf ( " %d  %g  %g \n " ,n,x1,x2);
    } senão  se (n == 1 ){
        printf ( " %d  %g \n " ,n,x1);
    } senão {
        printf ( " %d \n " ,n);
    }

    retorna  0 ;
}


int  raizes ( float * a, float * b, float * c, float * x1, float * x2){
    float delta = (*b)*(*b)- 4 *(*a)*(*c);
    se (delta > 0,0 ){
        *x2 = (-(*b)+ sqrt (delta))/( 2 *(*a));
        *x1 = (-(*b)- sqrt (delta))/( 2 *(*a));
        se (*x1>*x2){
            flutuante aux = *x1;
            *x1 = *x2;
            *x2 = auxiliar;
        }
        retornar  2 ;
    } senão  se (delta< 0.0 ){
        retorna  0 ;
    } senão {
        *x1 = -(*b)/( 2 *(*a));
        retornar  1 ;
    }
}