#include <stdio.h>
#include <ctype.h>
#include <math.h>


int htoi(char hex[]);

main(){
    int ans;
    char line[] = "0xabcdef0";
    ans = htoi(line);
    printf("%d", ans);

    


}


int htoi(char s[]){

    int hexdigit, i, inhex, n;

    /* skip 0x or 0X if it exists in hex */
    i = 0;
    if(s[i] == '0'){
        i++;
        if(s[i] == 'x' || s[i] == 'X'){
            i++;
        }
    }
    inhex = 1;
    
    for(int j = i; inhex == 1; ++j){
        if(s[j] >= '0' && s[j] <='9'){
            hexdigit = s[j] - '0';
        }
        else if(s[j] >= 'a' && s[j] <= 'f'){
            hexdigit = s[j] - 'a' + 10;
        }
        else if(s[j] >= 'A' && s[j] <= 'F'){
            hexdigit = s[j] - 'A' + 10;
        }
        else{
            inhex = 0;
        }
        if(inhex == 1){
            n = 16 * n + hexdigit;
        }
    }
    return n; 

}
