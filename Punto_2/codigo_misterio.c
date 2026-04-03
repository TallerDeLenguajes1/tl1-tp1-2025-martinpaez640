#include <stdio.h>

void f_alpha(int *p) {
    int num = *p;
    int inverso_num = 0;
    while (num > 0) {
        inverso_num = (inverso_num * 10) + (num % 10);
        num = num / 10;
    }
    *p = inverso_num;
}

void f_beta(int *p) {
    *p = *p / 2;
}

void f_gamma(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

void procesar_enigma(int *valor_referencia) {
    f_alpha(valor_referencia);
    f_beta(valor_referencia);
    f_gamma(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);

    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}