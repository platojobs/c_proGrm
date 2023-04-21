//
//  input_verification.c
//  C_Plus
//
//  Created by Jobs Plato on 2023/4/14.
//

#include "input_verification.h"

//输入验证
long input_verification(void){
    long input;
    char ch;
    while (scanf("%ld",&input)!=1) {
        
        while ((ch = getchar()) != '\n') {
            putchar(ch);//处理错误输入
            printf("错误输入，请输入整数");
        };
        printf("整数输入，例如1,2,3,25，-123:");
    }
    return input;
}

/*
 q
 q错误输入，请输入整数整数输入，例如1,2,3,25，-123:
 1
 1Program ended with exit code: 0
 */
