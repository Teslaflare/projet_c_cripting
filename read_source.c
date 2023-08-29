#include "header.h"

void read_source(void)
{
    FILE *fp = NULL;
    char lettreLu = '\0';

    fp = fopen("source.txt", "rt");
    if (fp == NULL)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }

    //1ere lecture
    //fseek(fp, 5, SEEK_SET);   //D�calage de 5 � partir du d�but du fichier
    //fseek(fp, -5, SEEK_END);    //D�calage de 5 � partir de la fin de fichier

    fread(&lettreLu, sizeof(lettreLu), sizeof(char), fp);
    if (feof(fp))
    {
        printf("\nFichier Vide !!!");
    }

    //Tant que la fin de fichier n'a pas �t� d�tect�e
    while(!feof(fp))
    {
        printf("\nLettre Lu : %c", lettreLu);
        // printf(" %s", &perroquet);
        fread(&lettreLu, sizeof(lettreLu), sizeof(char), fp);
        if (feof(fp))
        {
           printf("\n\tFichier Fini !!!");
        }
    }

    int retClose = fclose(fp);
    if (retClose!= 0)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }
    
}
