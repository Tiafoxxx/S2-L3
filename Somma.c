#include <stdio.h>

int main()
{
    int numero, i;
    int somma = 0;
    char risultato;
    printf("\nPuoi sommare fino a 1000 numeri,\n");
    printf("\nper terminare digitare = e premere invio.\n");
    for (i = 0; i < 1000; ++i)
    {
        printf("\nInserisci il %d° numero: \n", i + 1);
        scanf("%d", &numero);
        scanf("%c", &risultato);
        if (risultato == '=')
            break;
        somma += numero;
    }
    printf("\nLa somma dei numeri inseriti è: %d\n", somma);

    return 0;
}