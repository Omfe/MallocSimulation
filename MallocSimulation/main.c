//
//  main.c
//  MallocSimulation
//
//  Created by Omar Gudino on 9/11/13.
//  Copyright (c) 2013 Omar Gudino. All rights reserved.
//

#include <stdio.h>



void malloc_t(char string[], char newString[] , int lenght){
    
    for(int i=0; i < lenght; i++){
        if (string[i] != '\0') {
        newString[i] = string[i];
        } else{
            break;
        }
    }
}

void free_t(char string[], int lenght)
{
    for (int i = 0; i<lenght; i++) {
        string[i] = ' ';
    }
}

int main(int argc, const char * argv[])
{
    
    printf("Favor de escribir un solo pedazo de texto que desee guardar\n");
    
    int i = 0;
    char myString[100];
    scanf("%s", myString);
    while (myString[i] != '\0') {
        i++;
    }
    char myMemory[i];
    
    printf("Malloc:\n");
    malloc_t(myString, myMemory, i);

    for (int j = 0; j<i; j++) {
        printf("%c", myMemory[j]);
    }
    printf("\nFree:\n");
    
    free_t(myMemory, i);
    
    for (int j = 0; j<i; j++) {
        printf("%c", myMemory[j]);
    }
    printf("\n");
    
    return 0;
}


//entonces ingreso texto, eso se guarda en un array de chars, luego uso el metodo malloc para hacer un array de chars con un tamaño mas preciso con el contenido que ingrese y luego un metodo free para vaciar el espacio de ese malloc?

