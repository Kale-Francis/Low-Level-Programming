#include <stdio.h>

int main(){
    printf("Hello, World!")

    return 0;
}

//gcc task9_semicolon_error.c -o program
//task9_semicolon_error.c: In function 'main':
//task9_semicolon_error.c:4:28: error: expected ';' before 'return'
//    4 |     printf("Hello, World!")    
//      |                            ^   
//      |                            ;   
//    5 | 
//    6 |     return 0;
//      |     ~~~~~~