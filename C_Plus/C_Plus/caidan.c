//
//  caidan.c
//  C_Plus
//
//  Created by Jobs Plato on 2023/4/21.
//

#include "caidan.h"

char get_first(void){
    
    int ch ;
    ch = getchar();
    while (getchar() != '\n') {
        continue;
    }
    return  ch;
}

int get_int(void){
    
    int input;
    char ch;
    
    while (scanf("%d",&input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
            printf(" is not an integer.\please enter an ");
            printf("integer value , such as 25 , -178 ,or 3:");
        }
    }
    return  input;
}

char get_choice(void){
    
    int ch;
    printf("Ente the letter of your choice:\n");
    printf("a. advice                  b.bell\n");
    printf("c. count                   q. quit\n");
    ch = get_first();
    
    while ((ch < 'a' || ch > 'c')&& ch != 'q') {
        printf("Please repond with a,b,c, or q.\n");
        ch = get_first();
    }
    return ch;
}

void count(void){
    
    int n , i;
    printf("Count how far? Enter an integer:\n");
    n = get_int();
    
    for (i=1; i<= n; i++)
        printf("%d\n", i);
    while (getchar() != '\n')
        continue;
    
}


void choice_test(void){
    
    int choice;
    while ((choice = get_choice()) != 'q') {
        switch(choice){
            case 'a': printf("buy low , sell high.\n");
                break;
            case 'b': putchar('\a');
                break;
            case 'c': count();
                break;
            default: printf("Program error\n");
                break;
        }
    }
    
    printf("Bye.\n");
}
