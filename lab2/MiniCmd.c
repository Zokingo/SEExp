/*************************************************************************
    > File Name: MiniCmd.c
    > Author: Qin Zhong
    > Mail: zhongqin0820@163.com 
    > Created Time: 2017年09月16日 星期六 16时01分33秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 128
void PrintHelp()
{
    printf("help cmd list\n");
	printf("------------------------------------------------------\n");
	printf("help for help list\n");
	printf("quit for exit this program\n\n");
}
void ErrorCmdPrint()
{
    printf("error cmd\n\n");
	PrintHelp();
}
int main()
{
	char cmd[MAXN];
	memset(cmd,0,sizeof(char)*MAXN);
	while(1)
	{
		gets(cmd);
		if(strcmp(cmd,"help") == 0)
		{
			PrintHelp();
		}
		else if(strcmp(cmd,"quit") == 0)
		{
			printf("bye~\n");
			exit(0);
		}
		else if(strcmp(cmd,"clear") == 0)
		{
            system("cls");
		}
		else if(strstr(cmd,"hello") != NULL)
		{
			printf("你好,%s\n",cmd);
		}
		else if(strcmp(cmd,"null") == 0)
		{
			printf("null\n");
		}
		else if(strstr(cmd,"whois") != NULL)
		{
			printf("me\n");
		}
		else
		{
            ErrorCmdPrint();
		}
	}
	
    return 0;
}
