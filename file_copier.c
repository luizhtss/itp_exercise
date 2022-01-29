#include <stdio.h>

int main(int argc, char *argv[]){

    FILE *fonte = fopen(argv[1], "rb");
    FILE *destino = fopen(argv[2], "wb+");

    if (fonte != NULL){
        char cbuffer;

        while ((cbuffer = fgetc(fonte)) !=EOF ){
            fputc(cbuffer, destino);
        }

        fclose(fonte);
        fclose(destino);

        printf("Arquivo copiado!\n");
    }    

    return 0;
}