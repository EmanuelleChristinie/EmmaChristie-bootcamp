#include <stdio.h>
#include <math.h>
int  main(){
    float a, b, c, x1, x2, discriminante;
    
    scanf("%f %f %f", &a, &b, &c );
    discriminante = (b*b) - 4 * a * c;
    if(discriminante > 0){ 
        x1 = (-b + sqrt(discriminante))/(2*a);
        x2  = (-b - sqrt(discriminante))/(2*a);
        printf("R1 = %.5f e R2 = %.5f", x1, x2);

    } else if(discriminante == 0 ){
        x1  = - b/(2*a);
        printf("R1 = %.5f", x1);
    } else if(discriminante == 0) {
      printf("IMPOSSIVEL DE CALCULAR");
    }
    return 0;
}
//emanuelle christinie ribeiro de oliveira 22501932