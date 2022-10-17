#include <stdio.h>

typedef struct nrComplex
{
    int parte_reala;
    int parte_imag;
    }nrComplex;

nrComplex impartire(nrComplex nr1, nrComplex nr2);

int main()
{
    nrComplex nr1, nr2, cat;

    printf("Introduceti partea reala a primului nr complex: \n");
    scanf_s("%d", &nr1.parte_reala);
    printf("Introduceti partea imaginara a primului nr complex: \n");
    scanf_s("%d", &nr1.parte_imag);

    printf("Introduceti partea reala a celui de-al doilea nr complex: \n");
    scanf_s("%d", &nr2.parte_reala);
    printf("Intorduceti partea imaginara a celui de-al doilea nr complex: \n");
    scanf_s("%d", &nr2.parte_imag);

    cat = impartire(nr1, nr2);
    printf("Rezultatul impartirii celor doua nr complexe este: %d + %di", cat.parte_reala, cat.parte_imag);
    return 0;
}

nrComplex impartire(nrComplex nr1, nrComplex nr2)
{
    nrComplex cat;

    cat.parte_reala = (nr1.parte_reala * nr2.parte_reala + nr1.parte_reala * nr2.parte_imag) / (nr2.parte_reala * nr2.parte_reala + nr2.parte_imag * nr2.parte_imag);
    cat.parte_imag = (nr1.parte_imag * nr2.parte_reala - nr1.parte_reala * nr2.parte_imag) / (nr2.parte_reala * nr2.parte_reala + nr2.parte_imag * nr2.parte_imag);
    return cat;
 }