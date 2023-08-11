//
// Created by aluno on 11/08/23.
//
#include <stdio.h>

int main(int argc,char *argv[]) {
        FILE *arquivo;
        char *nome[20];

        nome[20] = (argv [2]);

        if ((arquivo=fopen (argv[1],"rt"))==NULL)
            return 0;
        else
        {
            printf("%s",nome[20]);}

        fclose(arquivo);
    }