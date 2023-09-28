#include <stdio.h>
#include <stdlib.h>


	int numPrimo(int num) {
	    if (num <= 1) {
	        return 0;  
	    }
	    for(int i = 2; i * i <= num; i++) {
	        if (num % i == 0) {
	            return 0; 
	        }
	    }
	    return 1;  
	}
	
	int main() {
	
	void dec_em_dois_primos(int num) {
	    int x = 0;
	
	    for (int i = 2; i <= num / 2; i++) {
	        if (numPrimo(i) && numPrimo(num - i)) {
	            printf("%d = %d + %d\n", num, i, num - i);
	            x = 1;
	        }
	    }
	
	    if (!x) {
	        printf("Decomposicao em dois numeros nao encontrada.\n");
	    }
	}
	    int num;
	
	    printf("Insira um numero inteiro que seja maior que 2: ");
	    scanf("%d", &num);
	
	    if (num <= 2) {
	        printf("Precisamos que insira um numero maior que 2.\n");
	    } else {
	        dec_em_dois_primos(num);
	    }
	
	    return 0;
	}

