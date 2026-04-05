#include <stdio.h>
#include <ctype.h>

int main() {
    float preco, carrinho = 0, pagamento, troco;
    char resposta;

    do{
    printf("\nEscreva o valor do produto:\n");
    scanf("%f", &preco);

    carrinho += preco;

    printf("\nDeseja continuar? [S/N]\n");
    scanf(" %c", &resposta);


    } while (tolower(resposta) == 's');

    printf("\nO preço total da sua compra é %.2f\n", carrinho);
    
    printf("\nQuanto o cliente deu de pagamento?\n");
    scanf("%f", &pagamento);

    troco = pagamento - carrinho;

    if (troco == 0){
        printf("Não há troco");
    } else if (troco < 0){
        printf("Você não posso saldo suficiente");

    } else {
        printf("O troco é de R$%.2f", troco);
    }

    return 0;
}