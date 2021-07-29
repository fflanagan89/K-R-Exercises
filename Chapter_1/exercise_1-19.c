#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverse(char line[], int length);


main(){

    int len;
    int max;
    char line[MAXLINE];

    while((len = get_line(line, MAXLINE)) > 0){
        reverse(line, len);
        printf("\n %s\n", line);

    }

    

}

int get_line(char s[], int lim){

    int c, i;
    for(i = 0; i < lim-1 && (c=getchar())!=EOF && c!= '\n'; ++i){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;           
    }
    s[i] = '\0';
    return i;

}
/* swapping the ends and moving inwards by one on each side */
void reverse(char s[], int len){

    for(int i = 0; i <= len; ++i, --len) {

        char c = s[i];
        s[i] = s[len-1];
        s[len-1] = c;
    
    }

}

