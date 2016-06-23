// Verificar se número é par

#include <stdio.h>

int main() {
    
	int n;
	
	printf ("digite um valor \n");
    scanf("%d", &n);
    
    if(n%2==0) {
		printf("par");
    } 
    else {
		printf("impar");
    }
	
return 0;
}

