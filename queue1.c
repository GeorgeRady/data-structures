// Queue implementation using circular arrays

#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

int A[MAX_SIZE];
int rear = -1;
int front = -1;

// functions prototypes
bool isEmpty();
bool isFull();
void enqueue(int a);
int dequeue();
int top();
void printQueue();

// main function
int main(void)
{
  printQueue();
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
  if (rear == -1 && front == -1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool isFull()
{
  if ((rear + 1) % MAX_SIZE == front)
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

  if (!isFull())
  {
    // check for corner cases
    if (isEmpty())
    {
      front++;
    }
    rear = (rear + 1) % MAX_SIZE;
    A[rear] = a;
  }
  else
  {
    printf("error: queue is full\n");
    return;
  }
}

int dequeue()
{
  if (isEmpty())
  {
    printf("error: dequeue operation can not be done, queue is empty\n");
    return;
  }
  else if (front == rear)
  {
    // set the queue to be empty
    front = -1;
    rear = -1;
  }
  else
  {
    front = (front + 1) % MAX_SIZE;
  }
}

int top()
{
  if (isEmpty())
  {
    return;
  }
  else
  {
    return A[front];
  }
}

void printQueue()
{
  // check if queue is empty
  if (isEmpty())
  {
    printf("queue is empty\n");
  }
  else
  {
    // print queue
    printf("queue: ");
    int qlen = rear - front + 1;
    for (int i = 0; i < qlen; i++)
    {
      printf("%d\t", A[front + i]);
    }
    printf("\n");
  }
}
