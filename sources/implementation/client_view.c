#include "../header/client_view.h"
int client_view_fun(int b)
{
	if (b==0)
	{
		printf("%s : %d\n", "client_view_fun_if",b);
		return b;
	}
	else
	{
		printf("%s : %d\n", "client_view_fun_else",b);
		return b;
	}
}
void client_view_proc(int b)
{
	if (b==0)
	{
		printf("%s : %d\n", "client_view_proc_if",b);
	}
	else
	{
		printf("%s : %d\n", "client_view_proc_else",b);
	}
}