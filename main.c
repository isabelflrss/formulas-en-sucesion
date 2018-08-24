/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 22 de agosto de 2018, 11:52 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main() {
    
    printf("Buen día usuario, hoy resolveremos tus problemas algebraicos\n");
    printf("Pero antes necesitamos que nos proporciones el valor de x");
    float x;
    scanf("%f",&x);
    
    if ((x>=1)&&(x<=100)){
        
        float y= (x+5)/(2*(x+1));
    float z1=(pow(y,2));
    float z2=(pow(x,2));
    float z3=(x*(-2*y));
    float z4=(z1+z2+z3)/(x*y);
    printf ("Z es igual a %f\n",z4);
    
    } else{
        printf("Eliga otro numero");
    }
printf("Nos vemos");    

    return 0;
}

