//CLIENT PROG
#include "client_init.h"
#include "client_connexion.h"
#include "client_action.h"
#include "client_view.h"

int controleArgsInPutClient (int argc,char * argv[]);
//
char * getIpServeur();
int setIpServeur(char *newIpServeur);
//
short getPortServeur();
int setPortServeur(short newPortServeur);
//
char * getpathClientStore();
int setpathClientStore(char * newpathClientStore);
//
char * getpathClientLoad();
int setpathClientLoad(char * newpathClientLoad);
//
int retirer_retour_chariot(char* chaine);
