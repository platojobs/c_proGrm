//
//  string_test.c
//  C_Plus
//
//  Created by Jobs Plato on 2023/3/31.
//

#include "string_test.h"
#include <string.h>
void string_test(void){
    
    char str1[20] = "C programming";
    char str2[90];
    
    char str11[] = "abcd";
    char str12[] = "abcd";
    char str13[] = "abCd";
    
    printf("%c\n",*str1);

      // copying str1 to str2
    
      strcpy(str2, str1);
     // strcat(str2, str1);
    int result  =  strcmp(str12, str13);
    puts(str2); // C programming
    printf("%d\n",result);
    
    char a[20]="Program";
        char b[20]={'P','r','o','g','r','a','m','\0'};

        // using the %zu format specifier to print size_t
        printf("Length of string a = %zu \n",strlen(a));
        printf("Length of string b = %zu \n",strlen(b));

    
    
    char str101[100] = "This is ", str102[] = "programiz.com";

       // concatenates str1 and str2
       // the resultant string is stored in str1.
       strcat(str101, str102);

       puts(str101); // This is programiz.com
       puts(str102); //programiz.com

   
}
