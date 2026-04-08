#include <stdio.h>
#include <ctype.h>

int main(){
    int selecao;
    float r = 0, dinheiro;
    char parar;
    
    do {
        printf("\nEscolha um produto da loja\n");
        printf(
            "\n[1] - Banana R$2.00\n"
            "[2] - Maçã R$3.50\n"
            "[3] - Pera R$5.00\n"
            "[4] - Laranja (em falta)\n\n"
        );
        scanf("%d", &selecao);

        switch (selecao)
        {
        case 1:
            printf("\nFoi adicionado R$2.00 a sua sacola\n");
            r += 2;
            break;
        
        case 2:
            printf("\nFoi adicionado R$3.50 a sua sacola\n");
            r += 3.5;
            break;
        
        case 3:
            printf("\nFoi adicionado R$5.00 a sua sacola\n");
            r += 5;
            break;
        case 4:
            printf("\nPedimos desculpas, mas a laranja esta em falta\n");
            break;
        }

        printf("\nGostaria de parar? [S/N]?\n");
        scanf(" %c", &parar);

    } while (tolower(parar) == 'n');

    parar = 'n';
    selecao = 0;

    printf("\n\n\nO valor total do seu carrinho foi de: R$%.2f\n\n", r);
    printf("Como você gostaria de pagar?\n"
        "\n[1] - Dinheiro (A vista)\n"
        "[2] - Cartão de débito: (A vista)\n"
        "[3] - Cartão de crédito (Parcelado)\n\n"
    );
    scanf("%d", &selecao);
    
    do{
        switch (selecao) {
            case 1:
            printf("\nVocê escolheu dinheiro\n");
            
            printf("\nQuanto você tem para pagar em notas / moedas?\n");
            scanf("%f", &dinheiro);

            if (dinheiro < r){
                printf("\nSaldo insuficiente, gostaria de parar?\n");
                scanf(" %c", &parar);
            } else {
                printf("Pagamento aceito! Obrigado por comprar e volte sempre");
                parar = 's';
            }

            break;

            case 2:
            printf("Você escolheu cartão de debito");
            scanf("%f", &dinheiro);

            if (dinheiro < r){
                printf("\nSaldo insuficiente, gostaria de tentar novamente?\n");
                scanf(" %c", &parar);
            } else {
                printf("Pagamento aceito! Obrigado por comprar e volte sempre");
            }
            
            break;

            case 3:
            printf("\nVocê escolheu cartão de crédito\n");

            printf("\nEm quantas parcelas você quer pagar?\n");
            

            break;
        }
    } while(tolower(parar) == 'n');

    return 0;
}