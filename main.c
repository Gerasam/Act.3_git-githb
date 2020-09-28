#include <stdio.h>

int main(){
    char name[100];
    unsigned int edad;

    //printf("Hola Mundo\n");
    printf("Nombre: ");
    fgets(name, sizeof(name),stdin);
    printf("\nHola %s",name);
    printf("\nEdad: ");
    scanf("%u",&edad);
    printf("Vas a cumlpir %u",edad+1);

    return 0;
}