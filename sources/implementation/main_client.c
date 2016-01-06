
#include "../header/main_client.h"

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
char *pathClientStore="../../client_ressources";
char * getpathClientStore()
{
	return pathClientStore;
}
int setpathClientStore(char * newpathClientStore)
{
	if (pathClientStore = newpathClientStore)
	{
		return 1;
	}
	return 0;
}
//=================================================================

//=================================================================
char *pathClientLoad="../../client_ressources";

char * getpathClientLoad()
{
	return pathClientLoad;
}
int setpathClientLoad(char * newpathClientLoad)
{
	if (pathClientLoad = newpathClientLoad)
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

int controleArgsInPutClient (int argc,char * argv[])
{
	char * syntaxArgsProg ="main_client --ip char addrIP[16] --port short portNumber --pathS char * pathClientStore --pathL char * pathClientLoad";
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
				setpathClientStore(argv[2*(i+1)]);
			}
			else if (strcmp(argv[(2*i)+1],"--pathL")==0)
			{
				setpathClientLoad(argv[2*(i+1)]);
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
	controleArgsInPutClient (argc,argv);
	client_init_proc(1);
	client_action_proc(1);	
	client_connexion_proc(1);
	client_view_proc(1);
	return 0;
}