#include "../header/client_init.h"


int client_init_fun(int b)
{
	if (b==0)
	{
		printf("%s : %d\n", "client_init_fun_if",b);
		return b;
	}
	else
	{
		printf("%s : %d\n", "client_init_fun_else",b);
		return b;
	}
}
void client_init_proc(int b)
{
	if (b==0)
	{
		printf("%s : %d\n", "client_init_proc_if",b);
	}
	else
	{
		printf("%s : %d\n", "client_init_proc_else",b);
	}
}