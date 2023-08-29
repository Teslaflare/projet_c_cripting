#include "header.h"

char choix;
bool decision = 0;
char perroquet[20];

void menu_display(void)
{
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
                decision = 1;
                break;
            case '2':
                decision = 1;
                break;
            case '3':
                read_source();      
                cripting(perroquet);                
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