//LIBRARY
#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <errno.h>
#include <netinet/in.h>
#include <pthread.h>
#include <sys/types.h>
#include <string.h> 
int client_view_fun(int b);
void client_view_proc(int b);