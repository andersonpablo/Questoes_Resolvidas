// Verifica se o número é primo

#include <stdio.h>

int main() {
    
int n = 0;
int ac = 0;
int i = 0;

printf("digite um valor\n");   
scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        if(n%i==0){
            ac++;
        }
    } 
        
    if (ac==2){
        printf ("é primo");
    }      
	else {
        printf ("não é primo");
    }
    
    
return 0;
    
}



