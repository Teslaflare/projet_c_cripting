#include "header.h"

// LECTURE DE LA SOURCE

char* read_source(char chaine[100+1])
{
    FILE *fp = NULL;
    char lettreLu = '\0';

    fp = fopen("source.txt", "rt");
    if (fp == NULL)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }

    fread(&lettreLu, sizeof(lettreLu), sizeof(char), fp);
    if (feof(fp))
    {
        printf("\nFichier Vide !!!");
    }

    int i = 0;
    while(!feof(fp))
    {
        // printf("\nLettre Lu : %c", lettreLu);
        // printf(" %s", &perroquet);
        chaine[i] = lettreLu;
        i++;
        fread(&lettreLu, sizeof(lettreLu), sizeof(char), fp);
        if (feof(fp))
        {
        //    printf("\n\tFichier Fini !!!");
           chaine[i]='\0';
        }
    }
    // printf("%s",chaine);

    int retClose = fclose(fp);
    if (retClose!= 0)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }
    return chaine;
}

// LECTURE DU PERROQUET

char* read_peroq(char chaine[100+1])
{
    FILE *fp = NULL;
    char lettreLu = '\0';

    fp = fopen("peroq.def", "rt");
    if (fp == NULL)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }


    fread(&lettreLu, sizeof(lettreLu), sizeof(char), fp);
    if (feof(fp))
    {
        printf("\nFichier Vide !!!");
    }

    int i = 0;
    while(!feof(fp))
    {
        // printf("\nLettre Lu : %c", lettreLu);
        // printf(" %s", &perroquet);
        chaine[i] = lettreLu;
        i++;
        fread(&lettreLu, sizeof(lettreLu), sizeof(char), fp);
        if (feof(fp))
        {
        //    printf("\n\tFichier Fini !!!");
           chaine[i]='\0';
        }
    }
    // printf("%s",chaine);

    int retClose = fclose(fp);
    if (retClose!= 0)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }
    return chaine;
}
