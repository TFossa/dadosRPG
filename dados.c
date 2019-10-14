#include <stdio.h>
#include <stdlib.h>

void rolar(int d) {
    int n, i, total = 0, dado;
    printf("Quantos d%d?\n", d);
    scanf("%d", &n);
    printf("%dd%d = ", n, d);
    for (i = 1; i <= n; i++){
        dado = rand() % (d + 1);
        total += dado;
        if (i < n) printf("%d + ", dado);
        else printf("%d = %d\n", dado, total);
    }
}

int main () {
    int menu, i;

    while (menu != 0) {
        printf("1 - d4\n");
        printf("2 - d6\n");
        printf("3 - d8\n");
        printf("4 - d10\n");
        printf("5 - d12\n");
        printf("6 - d20\n");
        printf("0 - Sair\n");

        scanf("%d", &menu);

        if (menu == 1) rolar(4);
        if (menu == 2) rolar(6);
        if (menu == 3) rolar(8);
        if (menu == 4) rolar(10);
        if (menu == 5) rolar(12);
        if (menu == 6) rolar(20);
    }
    return 0;
}
