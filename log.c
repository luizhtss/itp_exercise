// This code doesn't have Log4Shell :)
// Or not!

#include <stdio.h>
#include <time.h>
#include <string.h>

char *getTime();

int main(){
    FILE *LOG = fopen("log.txt", "a+");

    char *time = getTime();

    fprintf(LOG, "[INFO] Programa iniciado! Data: %s\n", time);

    char str[6];

    do{
        fgets(str, 6, stdin);
        if (strstr(str, "SAIR") != NULL){
            time = getTime();
            fprintf(LOG, "[INFO] Programa finalizado! Data: %s\n", time);
        }

    }while(strstr(str, "SAIR") == NULL);

    return 0;
}

char *getTime(){
    time_t mytime = time(NULL);
    char * time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    return time_str;
}