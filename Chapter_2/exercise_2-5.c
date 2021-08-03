#include <stdio.h>

int any(char s1[], char s2[]);

main(){

    char str_1[] = "frank";
    char str_2[] = "michael";
    char str_3[] = "johnfkennedy";
    char str_4[] = "dope";
    int ans;
    ans = any(str_1, str_2);
    printf("%d \n", ans);
    ans = any(str_1, str_3);
    printf("%d \n", ans);
    ans = any(str_1, str_4);
    printf("%d \n", ans);

}

int any(char s1[], char s2[]){
    
    int i, j;

    for(i = 0; s1[i] != '\0'; i++){

        for(j = 0; s2[j] != '\0'; j++){

            if(s1[i] == s2[j]){

                return i;

            }

        }

    }



    return -1;



}



