#include <stdio.h>

int main() {
    int hora_inicial, min_inicial, hr_final, min_final;
    int total_minutos_in, total_minutos_fim, duracao;
    int horas, minutos;

   scanf("%d %d", &hora_inicial, &min_inicial);
   scanf("%d %d", &hr_final, &min_final);
   
   total_minutos_in = (hora_inicial * 60) + min_inicial;
   total_minutos_fim = (hr_final * 60) + min_final;
  
   if (total_minutos_fim == total_minutos_in) {
        horas = 24;
        minutos = 0;
    } else  {
    if(total_minutos_fim < total_minutos_in){
       total_minutos_fim += 24 * 60;

   }
   
   duracao = total_minutos_fim - total_minutos_in;
   horas = duracao / 60;
   minutos = duracao % 60;
    }
   printf("O JOGO DUROU %d HORAS(s) E %d MINUTOS(s)", horas, minutos);
   
   return 0;
}