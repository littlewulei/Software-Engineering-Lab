#ifndef -LINK_TABLE_H_
#define _LINK_TABLE_H_

#include <pthread.h>
#define SUCCESS 0
#define FAILURE (-1)

typedef struct LinkTableNode
{
    struct LinkTableNode *pNext;

}tLinkTableNode;

typedef struct LinkTable
{
   tLinkTableNode *phead;
   tLinkTableNode *ptail;
   int SumOfNode;
   pthread_mutex_t mutex;

}tLinkTable;


tLinkTable *CreateLinkTable();

int DeleteLinkTable(tLinkTable *pLinkTable);
int AddLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode *pNode);
int DelLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode *pNode);

tLinkTableNode * getLinkTableHead(tLinkTable *pLinkTable);
tLinkTableNode * getLinkTableNextNode(tLinkTable *pLinkTable,tLinkTableNode *pNode);

#endif

