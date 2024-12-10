#include <stdio.h>
#include <string.h>  

int scan(char m[], char n[]){
    if(m != n){
       return 1;  
    }else{
       return 0; 
    }
}

int main(){
    char m[100], n[100];  

    printf("1-matnni kiriting: ");
    fgets(m, sizeof(m), stdin);  

    printf("2-matnni kiriting: ");
    fgets(n, sizeof(n), stdin); 

    if(scan(m, n)){
       printf("teng\n");
    }else{
       printf("teng emas\n");
    }

    return 0;
}
