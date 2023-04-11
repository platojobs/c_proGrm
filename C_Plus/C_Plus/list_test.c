//
//  list_test.c
//  C_Plus
//
//  Created by Jobs Plato on 2023/3/31.
//

#include "list_test.h"
void dosomething(int value);
void do_str(const char* value);

void list_test(void){
    
    int prices[] = {1,12,3,4,5};
    char ppp[] = "hello";
    
    printf("%u\n",*prices);
    printf("%u\n",*(prices +1));
    
    dosomething(3);
    do_str(ppp);
    
}



void dosomething(int value){
    
    printf("%u\n",value);
}

void do_str(const char* value){
   
    printf("%s\n",value);
}


