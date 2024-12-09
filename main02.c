#include <stdio.h>
#include <ctype.h>

int main(){
    char s[100];
    int count = 0;

    printf("BIror nima kiriting: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++){
        if(isdigit(s[i])){
           count++;
        }
    }

    printf("Raqamlar soni: %d\n", s);

    return 0;
}
