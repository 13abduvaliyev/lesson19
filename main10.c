#include <stdio.h>

void swap(char c[]){
    for(int i = 0; c[i] != '\0'; i++){
        if(c[i] == '-'){
           c[i] = ' ';
        }
    }
}

int main(){
    char s[100];  

    fgets(s, sizeof(s), stdin); 

    swap(s);

    printf("%s\n", s);

    return 0;
}
