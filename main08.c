#include <stdio.h>
#include <ctype.h> 

int main(){
    char s[100]; 
    int count = 0;  
    
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++){
        if(isupper(s[i])){
           count++;  
        }
    }

    printf("%d ta katta harf bor\n", count);

    return 0;
}
