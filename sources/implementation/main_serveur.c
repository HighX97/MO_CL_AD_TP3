
#include "../header/main_serveur.h"

//=================================================================
char *ipServeur="127.0.0.1";
char * getIpServeur()
{
	return ipServeur;
}
int setIpServeur(char *newIpServeur)
{
	printf("oldIpServeur : %s\n",ipServeur );
	if (ipServeur = newIpServeur)
	{
		printf("newIpServeur : %s\n",ipServeur );
		printf("getIpServeur() : %s\n",getIpServeur());
		return 1;
	}
	return 0;
}
//=================================================================

//=================================================================
char *pathServeurStore="../../Serveur_ressources";
char * getpathServeurStore()
{
	return pathServeurStore;
}
int setpathServeurStore(char * newpathServeurStore)
{
	if (pathServeurStore = newpathServeurStore)
	{
		return 1;
	}
	return 0;
}
//=================================================================

//=================================================================
char *pathServeurLoad="../../Serveur_ressources";

char * getpathServeurLoad()
{
	return pathServeurLoad;
}
int setpathServeurLoad(char * newpathServeurLoad)
{
	if (pathServeurLoad = newpathServeurLoad)
	{
		return 1;
	}
	return 0;
}
//=================================================================

//=================================================================
short portServeur=(short)21345;
short getPortServeur()
{
	return portServeur;
}
int setPortServeur(short newPortServeur)
{
	if (portServeur = newPortServeur)
	{
		return 1;
	}
	return 0;
}
//=================================================================

//=================================================================
typedef int bool;
#define true 1
#define false 0
//=================================================================
int G_socketDomainServeur=PF_INET;
int getSocketDomainServeur()
{
  return G_socketDomainServeur;
}
bool setSocketDomainServeur(int newSocketDomainServeur)
{
  if(G_socketDomainServeur = newSocketDomainServeur)
  {  
    return true;
  }
  return false;
}
char * getSocketDomainServeurString()
{
  switch (G_socketDomainServeur) 
  {
    case PF_INET:
    return "PF_INET";
    break;
    case AF_UNIX:
    return "AF_UNIX";
    default:
    return "UNKNOWN";
  }
}
//=================================================================
int G_socketTypeServeur=SOCK_STREAM;
int getSocketTypeServeur()
{
  return G_socketTypeServeur;
}
bool setSocketTypeServeur(int newSocketTypeServeur)
{
  if(G_socketTypeServeur = newSocketTypeServeur)
  {  
    return true;
  }
  return false;
}
char * getSocketTypeServeurString()
{
  if (G_socketTypeServeur==SOCK_STREAM)
  {
    return "SOCK_STREAM";
  }
}
//=================================================================
int G_socketProtocolServeur=0;
int getSocketProtocolServeur()
{
  return G_socketProtocolServeur;
}
bool setSocketProtocolServeur(int newSocketProtocolServeur)
{
  if(G_socketProtocolServeur = newSocketProtocolServeur)
  {  
    return true;
  }
  return false;
}
char * getSocketProtocolServeurString()
{
  if (G_socketProtocolServeur==0)
  {
    return "STANDARD";
  }
}

//=================================================================
char *G_ipServeur="127.0.0.1";
char * getIpServeur()
{
  return G_ipServeur;
}
bool setIpServeur(char *newIpServeur)
{
  printf("oldIpServeur : %s\n",G_ipServeur );
  if (sprintf(G_ipServeur,"%s",newIpServeur)==0)
  {
    free(newIpServeur);
    printf("newIpServeur : %s\n",G_ipServeur );
    printf("getIpServeur() : %s\n",getIpServeur());
    return true;
  }
  printf("1-newIpServeur : %s\n",G_ipServeur );
  printf("1-getIpServeur() : %s\n",getIpServeur());
  return false;
}
//=================================================================
short G_portServeur=(short)21345;
short getPortServeur()
{
  return G_portServeur;
}
bool setPortServeur(short newPortServeur)
{
  if (G_portServeur = newPortServeur)
  {
    return true;
  }
  return false;
}
//=================================================================
short G_socketFamilly=AF_INET;
short getSocketFamilly()
{
  return G_socketFamilly;
}
bool setSocketFamilly(short newSocketFamilly)
{
  if (G_socketFamilly = newSocketFamilly)
  {
    return true;
  }
  return false;
}
//=================================================================
int G_nbPendantes=5;
int getNbPendantes()
{
  return G_nbPendantes;
}
bool setNbPendantes(int newNbPendantes)
{
  if (G_nbPendantes = newNbPendantes)
  {
    return true;
  }
  return false;
}
//=================================================================
int G_nbCltConnected=0;
int getNbCltConnected()
{
  return G_nbCltConnected;
}
int incNbCltConnected()
{
  if (G_nbCltConnected++)
  {
    return true;
  }
  return false;
}
int G_decNbCltConnected()
{
  if (G_nbCltConnected--)
  {
    return true;
  }
  return false;
}
//=================================================================
int G_nbTelechargement=0;
int getNbTelechargement()
{
  return G_nbTelechargement;
}
int incNbTelechargement()
{
  if (G_nbTelechargement++)
  {
    return true;
  }
  return false;
}
int decNbTelechargement()
{
  if (G_nbTelechargement--)
  {
    return true;
  }
  return false;
}
//=================================================================
int G_serveurStatut =0;
int changeServeurStatut()
{
  printf("%s %d\n","change",G_serveurStatut );
  G_serveurStatut = (G_serveurStatut+1)%2;
  printf("%s %d\n","change",G_serveurStatut );
  return G_serveurStatut;
}
int getServeurStatut()
{
  return G_serveurStatut;
}
char * getServeurStatutString()
{
  if (G_serveurStatut ==0)
  {
    return "OFF";
  }
  else
  {
    return "ON";
  }
}

char * getIpFromInConfig()
{
  FILE *output;
  output = popen("ifconfig  | grep 'inet adr' | tail -1 | cut -c20-32", "r");
  if (!output)
  {
    perror("err");
  }
  printf("sizeof(output) : %d\n",sizeof(output));
  char *ipAdresse=malloc(16*sizeof(char));
  char *ipAdresseServeur=malloc(16*sizeof(char));
  while (fgets(ipAdresse, sizeof(ipAdresse), output) != NULL) 
  {
    printf("while : %s", ipAdresse);
    strcat(ipAdresseServeur,ipAdresse);
    printf("while : %s", ipAdresseServeur);

  }
  printf("w ipAdresse : %s\n",ipAdresseServeur);
  free(ipAdresse);
  pclose(output);
  return ipAdresseServeur;
}

//

int controleArgsInPutServeur (int argc,char * argv[])
{
	char * syntaxArgsProg ="main_Serveur --ip char addrIP[16] --port short portNumber --pathS char * pathServeurStore --pathL char * pathServeurLoad";
	if (argc >9)
	{
		printf(">>>>>>\tError : Trop d'arguments.\n>>>>>>\t%s\n",syntaxArgsProg);
		exit(0);
	}
	else if (argc%2 ==0 )
	{
		printf(">>>>>>\tError : Nombre impaires d'arguments.\n>>>>>>\t%s\n",syntaxArgsProg);
		exit(0);
	}
	else if (argc ==1)
	{
		printf("Input : NULL\n");
		exit(1);
	}
	else
	{
		printf("Input : OK\n");
		int i;
		for(i=0;i<(argc/2);i++)
		{
			printf("\n\t%s\n", argv[(2*i)+1]);
			printf("\t%s\n", argv[2*(i+1)]);
			if (strcmp(argv[(2*i)+1],"--port")==0)
			{
				setPortServeur((short)atoi(argv[2*(i+1)]));
			}
			else if (strcmp(argv[(2*i)+1],"--ip")==0)
			{
				setIpServeur(argv[2*(i+1)]);
			}
			else if (strcmp(argv[(2*i)+1],"--pathS")==0)
			{
				setpathServeurStore(argv[2*(i+1)]);
			}
			else if (strcmp(argv[(2*i)+1],"--pathL")==0)
			{
				setpathServeurLoad(argv[2*(i+1)]);
			}
			return 1;
		}
	}
}


int retirer_retour_chariot(char* chaine)
{
	int i;
	for(i=0;chaine[i] != '\0';i++)
	{
		if(chaine[i] == '\n')
		{
			chaine[i] = '\0';
			return i + 1;
		}
	}
	return i;
}


int main(int argc, char *argv[])
{
	controleArgsInPutServeur (argc,argv);
	Serveur_init_proc(1);
	Serveur_action_proc(1);	
	Serveur_connexion_proc(1);
	Serveur_view_proc(1);
	return 0;
}