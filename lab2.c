#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    char m_cmd[128]；

    while(1)
    {    
    printf("\n请输入您要执行的命令：\n");
    scanf("%s",m_cmd);

        if(0==strcmp(m_cmd,"help"))
        {
            printf("\n目前支持的命令有：help date route ifconfig ls netstat hostname exit\n");
            }

        else if(0==strcmp(m_cmd,"date"))
        {
            system("date");
            }

        else if(0==strcmp(m_cmd,"ifconfig"))
        {
        system("ifconfig");
            }

        else if(0==strcmp(m_cmd,"route"))
        {
        system("route");
            }

    else if(0==strcmp(m_cmd,"ls"))
        {
        system("ls");
            }      

    else if(0==strcmp(m_cmd,"netstat"))
        {
        system("netstat");
            } 

    else if(0==strcmp(m_cmd,"hostname"))
        {
        system("hostname");
            } 

    else if(0==strcmp(m_cmd,"exit"))
        {
        exit(0);
            }   
               
        else
        {
        printf("Wrong cmd\n");
        }    
    }
}
