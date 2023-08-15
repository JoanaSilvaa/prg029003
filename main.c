//
// Created by aluno on 11/08/23.
//

#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
    char *cpf = (argv [1]);

    char str3[11];

    for (int i = 0; i < 2; i++) {
        strncpy ( str3, cpf, 3 );
        str3[3] = '\0';

        printf("%s.",str3);
        cpf = cpf+3;
    }

    printf("%s-",str3);

    for (int j = 9; j < 11; ++j) {
        printf("%c", str3[j]);
    }
    return 0;
}

