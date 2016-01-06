#include "../header/client_connexion.h"
int client_connexion_fun(int b)
{
	if (b==0)
	{
		printf("%s : %d\n", "client_connexion_fun_if",b);
		return b;
	}
	else
	{
		printf("%s : %d\n", "client_connexion_fun_else",b);
		return b;
	}
}
void client_connexion_proc(int b)
{
	if (b==0)
	{
		printf("%s : %d\n", "client_connexion_proc_if",b);
	}
	else
	{
		printf("%s : %d\n", "client_connexion_proc_else",b);
	}
}