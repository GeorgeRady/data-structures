/*
George Magdy Rady
*/

// A program for Implementing stack using linked lists

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// declare linked lists node structure
struct Node
{
  int data;
  struct Node* next;
};

// declare head pointer to the first node
struct Node* head;

// declare a counter for no. of elements in the Stack
int count = 0;

// functions prototypes
void push(int a);
bool isEmpty();
void pop();
int top();
void printStack();


int main(void)
{
  //push elements to the Stack
  for (int i = 0; i < 5; i++)
  {
    push(2*i);
  }

  // print the stack elements
  printStack();

  // print top element of stack
  printf("The top element is %d\n", top());

  // remove the top element
  printf("removing the top element...\n");
  pop();

  // print the stack elements
  printStack();

  return 0;
}

// insert an element on the top of the stack
void push(int a)
{
  // create a new node temp
  struct Node* temp;
  temp = malloc(sizeof(struct Node));

  // check for memory errors
  if (!temp)
  {
    printf("error\n");
    return;
  }

  temp -> data = a;
  temp -> next = head;
  head = temp;
  count++;
}

// declare a function to check if the stack is empty
bool isEmpty()
{
  // the function returns true if the stack is empty
  if (count == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

// declare a function to remove the top element in the stack
void pop()
{
  // check for errors
  if (!head)
  {
    printf("error");
    return;
  }

  struct Node* temp;
  temp = head;
  head = head -> next;

  // remove connection between the first and second node
  temp -> next = NULL;

  free(temp);
}

int top()
{
  if (!isEmpty())
  {
    return head -> data;
  }
}

void printStack()
{
  // check for errors
  if (!head)
  {
    printf("error");
    return;
  }
  printf("Stack elements: ");
  struct Node* temp;
  temp = head;

  while (temp != NULL)
  {
    // print node data
    printf("%d\t", temp->data);

    // assign temp next to temp
    temp = temp -> next;
  }
  printf("\n");
}
