#include <stdio.h>
#include <math.h>

#define SOMA '+'
#define SUB '-'
#define MULTI '*'
#define DIV '/'
#define REST '%'
#define POT 'p'
#define RAIZ 'r'
#define QUEBRA (carac != 's') && (carac != 'S')
#define VALIDAR (carac != '+') && (carac != '-') && (carac != '*') && (carac != '/') && (carac != '%') && (carac != 'p') && (carac != 'r') && (carac != 's') && (carac != 'S')

int main()
{
    char carac;
    float val1, val2, resultado;
    int val11, val22, resultadox, cont;
    resultado = 0;
    cont = 0;


    printf("************************* Calculadora *************************\n");
    printf("\t\t + -> Soma\n ");
    printf("\t\t - -> Subtracao\n ");
    printf("\t\t * -> Multiplicacao\n ");
    printf("\t\t / -> Divisao\n ");
    printf("\t\t %% -> Resto\n ");
    printf("\t\t p -> Potencia\n ");
    printf("\t\t r -> Raiz\n ");
    printf("\t\t s -> Sair\n ");
    printf("Selecione qual operacao deseja executar: ");
    scanf("%c", &carac);

    if(VALIDAR){
        printf("\n\nCaractere nao valido, por favor, digite corretamente: ");
        scanf(" %c", &carac);
    }

    do
    {
        switch(carac)
        {
            case SOMA:
                if(val1!=resultado){
                    printf("\nInsira o primeiro valor: ");
                    scanf("%f", &val1);
                }

                printf("\nInsira o segundo valor: ");
                scanf("%f", &val2);
                resultado = val1+val2;
                printf("\nO resultado da soma e: %.2f\n", resultado);
                printf("\t\tDeseja fazer mais uma operacao? (Caso nao, digite s): \n\n");
                scanf(" %c", &carac);

                if(VALIDAR){
                    printf("\n\nCaractere nao valido, por favor, digite corretamente: ");
                    scanf(" %c", &carac);
                }

                val11 = resultado;
                val1 = resultado;
                break;

            case SUB:
                if(val1!=resultado){
                    printf("\nInsira o primeiro valor: ");
                    scanf("%f", &val1);
                }

                printf("\nInsira o segundo valor: ");
                scanf("%f", &val2);
                resultado = val1-val2;
                printf("\nO resultado da subtracao e: %.2f\n", resultado);
                printf("\t\tDeseja fazer mais uma operacao? (Caso nao, digite s): \n\n");
                scanf(" %c", &carac);

                if(VALIDAR){
                    printf("\n\nCaractere nao valido, por favor, digite corretamente: ");
                    scanf(" %c", &carac);
                }

                val11 = resultado;
                val1 = resultado;
                break;

            case MULTI:
                if(val1!=resultado){
                    printf("\nInsira o primeiro valor: ");
                    scanf("%f", &val1);
                }

                printf("\nInsira o segundo valor: ");
                scanf("%f", &val2);
                resultado = val1*val2;
                printf("\nO resultado da multiplicacao e: %.2f\n", resultado);
                printf("\t\tDeseja fazer mais uma operacao? (Caso nao, digite s): \n\n");
                scanf(" %c", &carac);

                if(VALIDAR){
                    printf("\n\nCaractere nao valido, por favor, digite corretamente: ");
                    scanf(" %c", &carac);
                }

                val11 = resultado;
                val1 = resultado;
                break;

            case DIV:
                if(val1!=resultado){
                    printf("\nInsira o primeiro valor: ");
                    scanf("%f", &val1);
                }

                printf("\nInsira o segundo valor: ");
                scanf("%f", &val2);

                if (val2==0){
                    printf("\nNao existe divisao por 0\n");
                }

                else{
                    resultado = val1/val2;
                    printf("\nO resultado da divisao e: %.2f\n", resultado);
                }

                printf("\t\tDeseja fazer mais uma operacao? (Caso nao, digite s): \n\n");
                scanf(" %c", &carac);

                if(VALIDAR){
                    printf("\n\nCaractere nao valido, por favor, digite corretamente: ");
                    scanf(" %c", &carac);
                }

                val11 = resultado;
                val1 = resultado;
                break;

            case REST:
                if(val11!=resultado && cont>0){
                    printf("\nO resultado nao e inteiro, logo nao e possivel achar seu resto");
                    printf("\nInsira o primeiro valor: ");
                    scanf("%d", &val11);
                }

                else if (val11 !=resultado){
                    printf("\nInsira o primeiro valor: ");
                    scanf("%d", &val11);
                }

                printf("\nInsira o segundo valor: ");
                scanf("%d", &val22);
                resultadox = val11%val22;
                printf("\nO resultado do resto e: %d\n", resultadox);
                printf("\t\tDeseja fazer mais uma operacao? (Caso nao, digite s): \n\n");
                resultado = resultadox;
                scanf(" %c", &carac);

                if(VALIDAR){
                    printf("\n\nCaractere nao valido, por favor, digite corretamente: ");
                    scanf(" %c", &carac);
                }

                val11 = resultado;
                val1 = resultado;
                break;

            case POT:
                if(val1!=resultado){
                    printf("\nInsira o primeiro valor: ");
                    scanf("%f", &val1);
                }

                printf("\nInsira o segundo valor: ");
                scanf("%f", &val2);
                resultado = pow(val1, val2);
                printf("\nO resultado da potencia e: %.2f\n", resultado);
                printf("\t\tDeseja fazer mais uma operacao? (Caso nao, digite s): \n\n");
                scanf(" %c", &carac);

                if(VALIDAR){
                    printf("\n\nCaractere nao valido, por favor, digite corretamente: ");
                    scanf(" %c", &carac);
                }

                val11 = resultado;
                val1 = resultado;
                break;

            case RAIZ:
                if(val1!=resultado){
                    printf("\nInsira o primeiro valor: ");
                    scanf("%f", &val1);
                }
                printf("\nInsira o segundo valor: ");
                scanf("%f", &val2);
                resultado = pow(val1, 1/val2);;
                printf("\nO resultado da raiz e: %.2f\n", resultado);
                printf("\t\tDeseja fazer mais uma operacao? (Caso nao, digite s): \n\n");
                scanf(" %c", &carac);

                if(VALIDAR){
                    printf("\n\nCaractere nao valido, por favor, digite corretamente: ");
                    scanf(" %c", &carac);
                }

                val11 = resultado;
                val1 = resultado;
                break;
        }
        cont++;
    }while(QUEBRA);

    return 0;
}
