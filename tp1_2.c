#include <stdio.h>

void cuadrado(int *num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{
    int num, a, b;
    printf("Ingrese un valor para num: ");
    scanf("%d", &num);
    printf("Ingrese dos valores b: ");
    scanf("%d",&b);
    printf("Ingrese dos valores a: ");
    scanf("%d",&a);
    cuadrado(&num);
    printf("El contenido de la variable es %d\nLa direccion de memoria de la variable es %p\n", num, &num);
    invertir(&a, &b);
    printf("\nEl valor de a es %d, el valor de b es %d\n", a, b);
    orden(&a, &b);
    printf("Luego de ordenar: a = %d, b = %d\n", a, b);
    return 0;
}

void cuadrado(int *num)
{
    *num *= *num;
}

void invertir(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    if (*a > *b)
    {
        invertir(a, b);
    }
}