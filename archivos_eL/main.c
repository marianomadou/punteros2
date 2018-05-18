#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char **argv)
{
    FILE *fp;

    char bufferIn[100];

    fp=fopen ("c:\\TEST\\fichero.txt", "r");

    while (!feof(fp))
    {
        fgets(bufferIn,100,fp);
        puts(bufferIn);
    }


    fclose(fp);

    return 0;
}


/*  FILE *fp;

    char buffer[100]="Esto esta dentro del fichero";

    fp=fopen ("c:\\TEST\\fichero.txt", "w");

    fprintf(fp,"hola manola");
    fprintf(fp,"%s",buffer);

    fclose(fp);

    getche();

    remove("c:\\TEST\\fichero.txt");

    return 0;*/
