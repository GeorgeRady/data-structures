/*
Introducing linked lists
*/
#include <stdio.h>

struct node
{
  int data;
  struct node *next;
}

int main(void)
{
  // declaring ......
  struct node *a;

  a = malloc(sizeof(struct node));
  a -> data = 5;
  a -> next = NULL;
}
