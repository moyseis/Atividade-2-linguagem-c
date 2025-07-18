Questão 1
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Total  =   100%%\n");
    printf("IVA    =   100%%\n");
    printf("IRS    =   100%%\n");
    printf("================\n");
    printf("liq    =   100%%\n");
    
    
}

Questão 2
#include <stdio.h>
#include <stdio.h>


int main(){
	
	int num1, num2, soma, sub, multi, divi, res;
	
	printf("Informe o primeiro numero inteiro: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero inteiro: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	divi = num1 / num2;
	res = num1 % num2;
	
	printf("Numero 1 \t Numero 2 \t Operacao \n");
    printf("%d \t \t %d \t \t numero1 + numeo2 = %d \n", num1, num2, soma);
    printf("%d \t \t %d \t \t numero1 - numeo2 = %d \n", num1, num2, sub);
    printf("%d \t \t %d \t \t numero1 * numeo2 = %d \n", num1, num2, multi);
    printf("%d \t \t %d \t \t numero1 / numeo2 = %d \n", num1, num2, divi);
    printf("%d \t \t %d \t \t numero1 %% numeo2 = %d \n", num1, num2, res
    );


   
	return 0;
}

Questão 3
#include <stdio.h>


int main(){
    int numero;
    printf("informe um numero inteiro:");
    scanf("%d",&numero);
    
    if(numero%2==0){
        printf("%d é um numero par,\n",numero);
         }else{printf("%d e um numero impar\n",numero);}
         return 0;
}

Questão 4
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    
    if (num2 != 0) {
        if (num1 % num2 == 0) {
            printf("%d é múltiplo de %d.\n", num1, num2);
        } else {
            printf("%d não é múltiplo de %d.\n", num1, num2);
        }
    }else {
       printf("Não é possível dividir por zero!\n");
   }

    return 0;
}
