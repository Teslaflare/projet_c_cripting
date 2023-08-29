#include "header.h"

void cripting(char* source, char* peroq)
{
    char result_ascii;
    FILE *fp = NULL;
    char lettreLu = '\0';

    fp = fopen("dest.ctr", "w+t");
    if (fp == NULL)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }


    for(int i = 0; i < strlen(source);i++)
    {
        // modulo permet de boucler dans la range de peroq, et de la table ascii, pour gérer les resultats négatifs
        result_ascii = ((source[i] - peroq[i%strlen(peroq)])%128);
        fwrite(&result_ascii, sizeof(result_ascii), sizeof(char), fp);
    }

    int retClose = fclose(fp);
    if (retClose!= 0)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }
    return;

}











void uncripting(void)
{

}