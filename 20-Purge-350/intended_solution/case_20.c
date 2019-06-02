#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
   int order;
   struct Node *prev;
   struct Node *next;
}NodeStruct;

void insertNode (int data);
void removeNode (NodeStruct *target);

NodeStruct *g_pTail = NULL;
#define g_pHead g_pTail->next

int main ()
{
   NodeStruct *countNode = NULL;
   NodeStruct *tmpNode = NULL;
   int M,N,i;
   scanf("%d %d",&N,&M);
   for (i=1; i<=N; i++)  insertNode (i);
   countNode = g_pHead;
   while (g_pTail != NULL)
   {
      for (i=1; i<M; i++) countNode = countNode->next;
      tmpNode = countNode->next;
      printf("%d",countNode->order);
      removeNode(countNode);
      countNode = tmpNode;
      if (g_pTail != NULL)
         printf (" ");
   }
}

void insertNode (int data)
{
   NodeStruct *pNewNode;
   // Create new Node
   pNewNode = (NodeStruct*) malloc(sizeof(NodeStruct));
   pNewNode->order = data;
   if (g_pTail == NULL) // new Node is first node.
   {
      g_pTail = pNewNode;
      pNewNode->prev = pNewNode;
      pNewNode->next = pNewNode;
   }
   else
   {
      pNewNode->next = g_pHead;
      g_pHead->prev = pNewNode;
      g_pTail->next = pNewNode;
      pNewNode->prev = g_pTail;
      g_pTail = pNewNode;
   }
}

void removeNode (NodeStruct *target)
{
   NodeStruct *FD = target->prev;
   NodeStruct *BK = target->next;
   if (BK == target) // target Node is last node.
   {
      g_pTail = NULL;
   }
   else
   {
      if (target == g_pTail) // target Node is tail.
         g_pTail = FD;
      FD->next = BK;
      BK->prev = FD;
   }
   free(target);
}

