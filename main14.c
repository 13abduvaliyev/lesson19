#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(char c[]){
    
    int length = strlen(c);
    int start = 0;

    for(int i = 0; i <= length; i++){
        if(c[i] == ' ' || c[i] == '\0'){
            for(int j = i - 1; j >= start; j--) {
                putchar(c[j]);
            }
            if(c[i] != '\0'){
                putchar(' ');
            }
            start = i + 1; 
        }
    }
}

int main(){
    
    char string[] = "Salom DUnyo";
    
    swap(string);

    return 0;
}
