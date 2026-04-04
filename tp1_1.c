#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hola mundo\n");
    int num=50,*Pnum;
    Pnum=&num;
    printf("Contenido del puntero %d",*Pnum);
    printf("\nLa direccion almacenada del puntero %p",Pnum);
    printf("\nLa direccion de memoria de la variable %p",&num);
    printf("\nLa direccion de memoria del puntero %p",&Pnum);
    printf("\nEl tamaño de memoria utilizada en la variable %d",sizeof(Pnum));
    return 0;
}