#include <stdio.h>
#include <string.h>
#include <ctype.h>

void symbol(char *s){
    int count[256] = {0}; 
    int max_count = 0;   
    char max = '\0';  

    for(int i = 0; s[i] != '\0'; i++){
        char ch = tolower(s[i]);

        if(ch >= 'a' && ch <= 'z'){
           count[ch]++; 
        }
    }

    for(int i = 0; i < 256; i++){
        if(count[i] > max_count){
           max_count = count[i];
           max = i;
        }
    }

    if(max_count > 0){
       printf("Eng kop qatnashgan harf '%c', %d marta\n", max, max_count);
    }
}

int main(){
    
    char s[] = "Welcome to Najot Talim";

    symbol(s);

    return 0;
}
