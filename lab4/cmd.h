#include <stdio.h>
#include <stdlib.h>

void Help()
{
	printf("help version data ipconfig route ls netstat exit");
} ;

void Date()
{
	system("date");
};

void Ipconfig()
{
	system("ipconfig");
};

void Route()
{
	system("route");
};

void List()
{
	system("ls");
};

void Netstat()
{
	system("netstat");
};

void Exit()
{
	exit(0);
};
