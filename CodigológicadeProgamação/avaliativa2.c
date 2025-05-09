#include <stdio.h>
int main(){
    float salario_fixo, salario_final, total_vendas;
    char nome [100];
scanf("%s", nome);
scanf("%f", &salario_fixo);
scanf("%f", &total_vendas);

salario_final= salario_fixo + (total_vendas * 0.15);

printf("TOTAL = R$ %.2f\n", salario_final);
return 0;

}