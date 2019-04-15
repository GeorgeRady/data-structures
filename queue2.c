/*
George Magdy Rady
*/

// A program for implementing queue using linked lists

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// declare linked lists node structure
struct Node
{
  int data;
  struct Node* next;
};

// declaring pointer to front and rear of the queue
struct Node* front = NULL;
struct Node* rear = NULL;

bool isEmpty();
void enqueue(int a);
void dequeue();
int head();
void printQueue();

// main function
int main(void)
{
  for (int i = 0; i < 10; i++)
  {
    enqueue(2 * i);
  }
  printQueue();
  dequeue();
  printQueue();
}

bool isEmpty()
{
  if (front == NULL && rear == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void enqueue(int a)
{
  // storing data in a temporary node
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
  temp -> data = a;
  temp -> next = NULL;

  if (isEmpty())
  {
    front = temp;
    rear = temp;
  }
  else
  {
    rear -> next = temp;
    rear = temp;
  }
}

void dequeue()
{
  // storing data in a temporary node
  struct Node* temp = front;

  // check if queue is empty
  if (isEmpty())
  {
    return;
  }

  if (front == rear)
  {

    front = NULL;
    rear = NULL;
  }
  else
  {
    front = front -> next;
  }

  free(temp);
}

// this function returns the front element in the queue
int head()
{
  if (!isEmpty())
  {
    return front -> data;
  }
}

void printQueue()
{
  // check if the queue is empty
  if (isEmpty())
  {
    return;
  }

  if (front == rear)
  {
    printf("Queue elements: ");
    printf("%d\n", front -> data);
  }
  else
  {
    printf("Queue elements: ");
    struct Node* temp;
    temp = front;

    while (temp != NULL)
    {
      // print node data
      printf("%d\t", temp->data);

      // assign temp next to temp
      temp = temp -> next;
    }
    printf("\n");
  }
}
