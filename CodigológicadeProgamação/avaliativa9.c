#include <stdio.h>
int main(){
    double N1, N2, N3, N4, media, exame, media_final;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1)/10 ;
    if (media >= 7){
        printf("Aluno aprovado\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado\n");
    } else if (media >= 5.0 && media <= 6.9){
        printf("Aluno em exame\n");
    }
     printf("Digite a nota do exame");
     scanf("%lf", &exame);

     media_final = (media + exame)/2;

    if (media_final >= 5.0){
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }
     printf("Media final: %.1lf\n", media_final);
    
   
     return 0;
}

// emanuelle christinie ribeiro de oliveira 22501932