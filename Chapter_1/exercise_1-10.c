#include <stdio.h>

main()
{

    int c;
    
    while((c = getchar()) != EOF){
        if(c == '\t'){
            putchar('\\t');
        }
        if(c == '\b'){
            putchar('\\b');
        }
        if(c == '\\'){
            putchar('\\\\');
        }
        else{
            putchar(c);
        }
    }
   
}
