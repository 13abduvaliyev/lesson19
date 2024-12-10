#include <stdio.h>

void sixteen(int number){
    printf("%x\n", number);
}

int main(){

    int n;

    printf("Sonni kiriting: ");
    scanf("%d", &n);
    
    sixteen(n);

    return 0;
}
