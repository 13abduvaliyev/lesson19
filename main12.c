#include <stdio.h>

int main(){

    char text[] = "Hello how are you";

    int count = 0, i = 1;

    while(text[i] !='\0'){
        if(text[i - 1] != ' ' && text[i] == ' '){
            count++;
        }
        i++;
    }

    printf("%d\n", count + 1);

    return 0;
}
