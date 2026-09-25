#include <stdio.h>


int resposta;

int main() {

printf("O computador liga? Se sim digite 1 se nao digite 2: ");
scanf("%d", &resposta);

if (resposta == 1) {
    printf("Da video na tela? ");
    scanf("%d", &resposta);

    if (resposta == 1) {
        printf("Pode ser um problema no Sistema Operacional/HD/SSD.");
    } else if ( resposta == 2) {
        printf("Pode ser um problema na placa de video/placa mae.");
    }

} else if (resposta == 2) {
    printf("A causa pode ser alimentacao/tomada.");


}

return 0;

}