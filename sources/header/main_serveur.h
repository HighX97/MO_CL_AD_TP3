//SERVEUR PROG
#include "serveur_action.h"
#include "serveur_connexion.h"
#include "serveur_action.h"
#include "serveur_view.h"

int controleArgsInPutServeur (int argc,char * argv[]);
//
char * getIpServeur();
int setIpServeur(char *newIpServeur);
//
short getPortServeur();
int setPortServeur(short newPortServeur);
//
char * getpathServeurStore();
int setpathServeurStore(char * newpathServeurStore);
//
char * getpathServeurLoad();
int setpathServeurLoad(char * newpathServeurLoad);
//
int retirer_retour_chariot(char* chaine);