#include <stdio.h>
#include <ctype.h> 
int main(){
    char text[] = "Salom DUnyo";
    int K = 0;

    for(int i = 0; text[i] != '\0'; i++){
        if(isupper(text[i])){  
           K++;
        }
    }

    printf("%d ta\n", K);
    
    return 0;
}