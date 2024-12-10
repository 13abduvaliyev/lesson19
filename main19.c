#include <stdio.h>
#include <ctype.h> 

int main(){
    
    char str[100];  
    int count = 0;  

    fgets(str, sizeof(str), stdin);  

    for(int i = 0; str[i] != '\0'; i++){
        if(!(isalpha(str[i]) || isdigit(str[i]) || isspace(str[i]))){
           count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
