#include <stdio.h>
#include <ctype.h>

int main(){
    char s[] = "c dasturlash tili";

    for(int i = 0; s[i] != '\0'; i++){
        s[i] = toupper(s[i]);
    }

    printf("%s\n", s);

    return 0;
}
