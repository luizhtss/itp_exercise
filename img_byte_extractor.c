#include <stdio.h>

int main(){
    FILE *BITMAP = fopen("me.bmp", "rb");

    if (BITMAP != NULL){
        char buffer[1];
        fread(buffer, 1, 1, BITMAP);

        for (int i =0; i < 2; i++){
            printf("Byte %d: %c\n",i, buffer[i]);
        }

        fclose(BITMAP);
    }else{
        printf("Falha ao realizar a leitura do arquivo!\n");
    }



    return 0;
}