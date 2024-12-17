#include <stdio.h>
union DatosNumero {
    float numeroReal;
    unsigned char bytesNumero[4]; 
};

void imprimirBytes(union DatosNumero datos); 

int main() {
    union DatosNumero datos;

    printf("Ingrese un numero real: ");
    scanf("%f", &datos.numeroReal);
    imprimirBytes(datos); 

    return 0;
}


void imprimirBytes(union DatosNumero datos) { 
    printf("Los bytes del numero real son: ");
    for (int i = 0; i < 4; i++) {
        printf("%02X ", datos.bytesNumero[i]);  
    }
}