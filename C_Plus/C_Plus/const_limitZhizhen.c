//
//  const_limitZhizhen.c
//  C_Plus
//
//  Created by Jobs Plato on 2023/4/13.
//

#include "const_limitZhizhen.h"



//指向指针的常量
void const_limitDebug(void){
    
    int x = 55;
    const int y = 88;
    const int *p;
    int *p1;
    p = &y;
    printf("%d\n",*p);
    p = &x;
    printf("%d\n",*p);
    x = 128;
    printf("%d\n",*p);
    
    p1 = (int*)&y;
    printf("%d\n",*p1);
    
    const double pi = 3.14;
    double *pp = &pi;
    
    
}

//常量指针
void constZhizhen(void){
    int x = 45, y = 55, *p1;
    int const sum = 100;
    int *const p = &x;
    int *const p2 = (int*)&sum;
    printf("%d %d\n",*p,*p2);
    x = y;
    printf("%d\n",*p);
    *p = sum;
    printf("%d\n",*p);
    *p2 = *p2 + sum + *p;
    printf("%d\n",*p2);
    p1 = p ;
    printf("%d\n",*p1);
    
}


//void指针
void void_zhizhen(void){
    int x = 256, y = 365 , *p = &x;
    void *vp = &x;
    printf("%p,%p,%d\n",vp,p,x);
    vp = &y;
    p = (int*)vp;
    printf("%p,%p,%d\n",vp,p,*p); //void指针指向整型变量对象x，但不能使用*vp引用整型对象的值。要引用这个值，必须强制将void指针赋值给与值相对应的整型指针类型

}
