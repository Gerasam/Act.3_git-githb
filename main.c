#include <stdio.h>

int main(){
    char name[100];

    printf("Hola Mundo\n");
    printf("Nombre: ");
    fgets(name, sizeof(name),stdin);
    printf("\nHola %s",name);


    return 0;
}