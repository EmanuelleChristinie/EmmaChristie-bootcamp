#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (A % B == 0 || B % A == 0) {
        printf("Sao multiplos\n");
    } else {
        printf("Nao sao multiplos\n");
    }

    return 0;
}
// emanuelle christinie ribeiro de oliveira 22501932