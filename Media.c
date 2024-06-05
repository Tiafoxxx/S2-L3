#include <stdio.h>

int main()
{
        float numero, i;
        float somma = 0;
        char risultato;
        printf("\nPuoi fare la media aritmetica di massimo 1000 numeri,\n");
        printf("\nper terminare digitare = e premere invio.\n");
        // printf("\n")
        for (i = 0; i < 1000; ++i)
        {
                printf("\nInserisci il %2.f° numero: \n", i + 1);
                scanf("%f", &numero);
                scanf("%c", &risultato);
                if (risultato == '=')
                        break;
                somma += numero;
        }

        if (i < 2)
                printf("\nInserisci almeno 2 numeri\n");
        else
                printf("\nLa media aritmetica dei numeri inseriti è: %.2f\n", somma / i);

        return 0;
}