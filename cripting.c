#include "header.h"

char perroquet[20];

void input_perroquet(void)
{
    // char* pointeur_perroquet;
    // pointeur_perroquet= &perroquet;
    printf("Choisissez votre perroquet de 0 à 20 caractères: ");
    scanf("%s", &perroquet);

    FILE *fp = NULL;

    fp = fopen("peroq.def", "w+t");
    if (fp == NULL)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }
    
    for(int i = 0; i < sizeof(perroquet); i++)
    {
        fwrite(&perroquet, sizeof(perroquet[i]), sizeof(char), fp);
        // printf("%c\n",perroquet[i]);
    }


    int retClose = fclose(fp);
    if (retClose!= 0)
    {
        printf("Erreur Open !");
        // return EXIT_FAILURE;
    }

    
}

void lecture(void)
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
        printf(" %s", perroquet);
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

void encriptage(void)
{
    char perroquet[20];
    // char* pointeur_perroquet;
    // pointeur_perroquet= &perroquet;
    printf("Choisissez votre Perroquet : ");
    scanf("%s", perroquet);
}