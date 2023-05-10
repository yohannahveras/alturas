#include <stdio.h>
#include <math.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

  int main ()
  {

    int n, menos;
    double alturaMedia, porcentagem, soma;
    
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);
    
    char nomes[n] [50];
    int idades[n];
    double alturas[n];
    
    for (int i = 0; i < n; i++) {
        printf("Dados da %d pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }
    
    soma = 0;
    
    for (int i = 0; i < n; i++) {
        soma = soma + alturas[i];
    }
    
    alturaMedia = soma / n;
    printf("\nAltura media: %.2lf\n", alturaMedia);
    
    menos = 0;
    for (int i = 0; i < n; i++) {
        if (idades[i] < 16) {
            menos++;
        }
    }
    
    porcentagem = menos * 100.0 / n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", porcentagem);
    
    for (int i = 0; i < n; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }
    
    return 0;
  }