#include "header.h"

void menu_display(void)
{
    char choix;
    bool decision = 0;
    char stockage_source[100+1];
    char stockage_peroq[100+1];

    printf("Bonjour, bienvenue dans le programme de chiffrage 303. Que voulez voulez faire ?\n"
    "\t 1) Saisie du message source à crypter.\n"
    "\t 2) Saisie du perroquet.\n"
    "\t 3) Chiffrage du message source.\n"
    "\t 4) Déchiffrage du message chiffré.\n"
    "\t 5) Quitter le programme.\n\n"
    "Saisissez le chiffre associé à votre choix : ");
    while(decision!=1){    
        scanf("%c",&choix);
        switch(choix){
            case '1':
                // input_source();
                decision = 1;
                break;
            case '2':
                // input_perroquet(perroquet);
                decision = 1;
                break;
            case '3':
                char* source = read_source(stockage_source);
                char* peroq = read_peroq(stockage_peroq);
                printf("%s\n",source);
                printf("%s\n",peroq);
                cripting(source, peroq);

                decision = 1;
                break;
            case '4':
                decision = 1;
                break;
            case '5':
                decision = 1;
                break;
            default:
                printf("Saisie incorrecte. Recommencez : \n");
                break;
        }
    }
}