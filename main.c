#include "header.h"

char choix;
bool decision = 0;

int main()
{
    printf("Bonjour, bienvenue dans le programme de chiffrage 303. Que voulez voulez faire ?\n"
    "\t 1) Saisie du message source à crypter.\n"
    "\t 2) Saisie du perroquet.\n"
    "\t 3) Chiffrage du message source.\n"
    "\t 4) Quitter le programme.\n\n"
    "Saisissez le chiffre associé à votre choix : ");
    while(decision!=1){
            scanf("%d",&choix);
            switch(choix){
            case 1:
                decision = 1;
                break;
            case 2:
                decision = 1;
                break;
            case 3:                      
                decision = 1;
                break;
            case 4:
                decision = 1;
                break;
            default:
                fflush(stdin);
                printf("Saisie incorrecte. Recommencez : ");
        }
    }
    
    input_perroquet();
    lecture();
    // encriptage();
}