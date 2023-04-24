//
//  pointer_Move.c
//  C_Plus
//
//  Created by Jobs Plato on 2023/4/24.
//

#include "pointer_Move.h"
#include <stdio.h>
#include <stdlib.h>
const int SIZE = 10;
void pointer_move(void){
    
    float *pf  ,*temppf,*min,temp,sum = 0.0;

    if ((min = temppf = pf =(float*)malloc(SIZE*sizeof(float))) == NULL ){
        printf("Memory error ，be gentle next time ");
        
    }else{
        
        for (; temppf-pf < SIZE; temppf++) {
            scanf("%10f",&temp);
            *temppf = temp;
        }
        for (temppf--; temppf >=pf; temppf--) {
            min = (*min > *temppf) ? temppf: min;
            sum += *temppf;}
        }
    
    printf("sum = %f , min = %f\n",sum, *min);
    free(pf);
    /*
     -2.5 2.5 5.8 -5.8 -386.5 2.34 -5.34 3.6 -6.6 200
     
     sum = -192.500000 , min = -386.500000
     */
}
