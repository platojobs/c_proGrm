//
//  size_test.c
//  C_Plus
//
//  Created by Jobs Plato on 2023/3/30.
//

#include "size_test.h"
void size_test(void){
    
    printf("char size: %lu bytes\n", sizeof(char));
      printf("int size: %lu bytes\n", sizeof(int));
      printf("short size: %lu bytes\n", sizeof(short));
      printf("long size: %lu bytes\n", sizeof(long));
      printf("float size: %lu bytes\n", sizeof(float));
      printf("double size: %lu bytes\n", sizeof(double));
      printf("long double size: %lu bytes\n", sizeof(long double));
}
