#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
#include "cmd.h"
#define CMD_MAX_LEN 128

static tDataNode head[] =
{
	{"help", "There are cmds you can input\n", Help, &head[1]},
	{"version", "Menu Programe Version 1.0\n" , NULL, &head[2]},
	{"date", "The date is: \n" , Date, &head[3]},
	{"ifconfig", "The IP state:\n" , Ipconfig, &head[4]},
	{"route", "The route state:\n" , Route, &head[5]},
	{"ls", "The file list:\n" , List, &head[6]},
	{"netstat", "The Net state:\n" , Netstat, &head[7]},
	{"exit", "The Programe will exit!" , Exit, NULL}
	
} ; 


int main()
{
	char cmd[CMD_MAX_LEN];
	
	 while(1)
    {    
    	printf("\nPlease input your cmd:\n");
    	scanf("%s",cmd);
    	tDataNode *p = head;
    	while(p != NULL)
    	{
    		if(strcmp(p->cmd, cmd) == 0)
    		{
    			printf("%s \n",  p->desc);
    			if(p->handler != NULL)
    			{
    				p->handler();
    			}
    			
    			break;
    		}
    		p = p->next;
    	}
    	if(p == NULL)
    	{
    		printf("This is a wrong cmd!\n");
    	}
	}

	return 0;
}
