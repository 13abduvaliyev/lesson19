#include <stdio.h>
#include <string.h>

int main(){
    char str[100]; 
    int takror[256] = {0};

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        takror[str[i]]++;
    }

    for(int i = 0; i < 256; i++){
        if(takror[i] > 0){
           printf("%c %d\n", i, takror[i]);
        }
    }

    return 0;
}
