#include <stdio.h>
#include <string.h>
#include <ctype.h>  

int scan(char password[]){
    int length = strlen(password);
 
    if(length < 8){
       return 0; 
    }
    
    int upper = 0, lower = 0, diget = 0, alnum = 0;
   
    for(int i = 0; password[i] != '\0'; i++){
        if(isupper(password[i])){
           upper = 1;  
        }else if(islower(password[i])){
           lower = 1; 
        }else if(isdigit(password[i])){
           diget = 1;
        }else if(!isalnum(password[i])){
           alnum = 1;  
        }
    }
}

int main(){
    char password[100];  

    printf("Parolni kiriting: ");
    fgets(password, sizeof(password), stdin); 

    if(scan(password)){
       printf("Parol xavfsiz\n");
    }else{
       printf("Parol xavfsiz emas\n");
    }

    return 0;
}
