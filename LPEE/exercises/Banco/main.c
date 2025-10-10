#include <stdio.h>

int main(){
    int Idade;
    int RendaMensal;
    int Score;
    int TempoTrabalhando;
    int ValorDesejado;
    int Emprestimo;

    float ValorPagar;

    printf("Qual sua idade?");
    scanf("%d",&Idade);
    printf("Sua idade e %d\n", Idade);

    printf("Qual sua Renda Mensal?");
    scanf("%d",&RendaMensal);
    printf("Sua Renda e %d\n", RendaMensal);

    Emprestimo = RendaMensal*5;

    printf("Qual seu Score?");
    scanf("%d",&Score);
    printf("Sua Score e %d\n", Score);

    printf("Qual seu Tempo de Trabalho?");
    scanf("%d",&TempoTrabalhando);
    printf("Sua Tempo e %d\n", TempoTrabalhando);

    printf("Voce pode ter ate %d, Qual seu Valor Desejado?", Emprestimo);
    scanf("%d",&ValorDesejado);
    printf("Seu valor e %d\n", ValorDesejado);

    ValorDesejado;



    if (Idade>=18 && Idade<=75){
        if(RendaMensal >= 1500){
            if(Score >= 30){
                if(ValorDesejado <= Emprestimo){
                    if(Score >= 300 && Score <= 500){
                        printf("BASICA\n");

                        printf("sua taxa e de 4/100 a.m., com um prazo de 24 meses\n");
                        ValorPagar = ValorDesejado * (1 + 0.04 * 24);
                        printf("tera que pagar %2.f\n", ValorPagar);

                    }else if(Score >= 500 && Score <= 700){

                        if(TempoTrabalhando >= 2) {
                            printf("você virou PREMIUM\n");

                            printf("sua taxa e de 1,5/100 a.m., com um prazo de 24 meses\n");
                            ValorPagar = ValorDesejado * (1 + 0.015 * 24);
                            printf("tera que pagar %2.f\n", ValorPagar);
                        }else {
                            printf("STANDART\n");

                            printf("sua taxa e de 2,5/100 a.m., com um prazo de 24 meses\n");
                            ValorPagar = ValorDesejado*0.025*24;
                            printf("tera que pagar %2.f\n", ValorPagar);
                        }
                    }else if(Score >= 700){
                        printf("PREMIUM\n");

                        printf("sua taxa e de 1,5/100 a.m., com um prazo de 24 meses\n");
                        ValorPagar = ValorDesejado * (1 + 0.015 * 24);
                        printf("tera que pagar %2.f\n", ValorPagar);
                    }

                }else{
                    printf("Voce quer muito dinheiro");
                }

            }else{
                printf("Voce nao tem score");
            }

        }else{
            printf("Voce nao tem renda");
        }

    }else{
        printf("Voce nao tem idade");
    }

    return 0;

}