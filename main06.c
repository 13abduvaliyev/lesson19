#include <stdio.h>
#include <string.h>

int found(char matn[], char soz[]){
    int n = strlen(matn); 
    int m = strlen(soz);   

    for(int i = 0; i <= n - m; i++){  
        for(int j = 0; j < m; j++){
            if(matn[i + j] != soz[j]){
               break; 
            }
        }

        if(j == m){
           return 1;
        }
    }
    return 0;  
}

int main(){
    char matn[] = "Najot Talim";
    char soz[] = "Najot";

    if(found(matn, soz)){
       printf("mavjud\n");
    }else{
       printf(" mavjud emas\n");
    }
    return 0;
}
