//
//  pdebug_zhizhen.c
//  C_Plus
//
//  Created by Jobs Plato on 2023/3/30.
//

#include "pdebug_zhizhen.h"

void pdebug_zhizhen(void){
    int a = 65;
    int *p;
    p = &a;
    
    printf("%p,%p,%p\n",&a,&p,p); //指针类型存储的是地址值
    printf("%d,%d,%d\n",a,*&a,*p);
    
    /*
     0x7ff7bfeff27c,0x7ff7bfeff270,0x7ff7bfeff27c
     65,65,65
     */
    
}


//结构指针
struct pencil {
    int hardness;
    char marker;
    int number;
};

void struct_zhizhenDebug(void){
    
    struct pencil p[3];
    struct pencil *pen;
    
    p[0].hardness = 2; p[0].marker ='F', p[0].number = 485;
    p[1].hardness = 0; p[1].marker ='G', p[1].number = 38;
    p[2].hardness = 3; p[2].marker ='E', p[2].number = 108;
    printf("Hardness Marker Number \n ");
    
    for (pen = p ; pen <= p+2; ++pen) {
        printf("%4d%8c%8d\n",pen ->hardness,pen->marker,pen->number);
    }
}