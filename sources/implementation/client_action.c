//LIBRARY
#include "../header/client_action.h"
int client_action_fun(int b)
{
	if (b==0)
	{
		printf("%s : %d\n", "client_action_fun_if",b);
		return b;
	}
	else
	{
		printf("%s : %d\n", "client_action_fun_else",b);
		return b;
	}
	return b;
}
void client_action_proc(int b)
{
	if (b==0)
	{
		printf("%s : %d\n", "client_action_proc_if",b);
	}
	else
	{
		printf("%s : %d\n", "client_action_proc_else",b);
	}
}