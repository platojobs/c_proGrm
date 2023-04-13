//
//  malloc_memerry.c
//  C_Plus
//
//  Created by Jobs Plato on 2023/4/13.
//

#include "malloc_memerry.h"
#include <stdlib.h>
//动态内存分配
void malloc_memerry(void){
    
    char *s;
    int n ;
    s = (char*)malloc(50);
    scanf("%s",s);
    for (n =0; *s != '\0'; ++s) {
        ++n;
    }
    s = s- n;
    free(s);
    printf("%d\n",n);
    
}
