// this is the header file for the task
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct task {
  int id;
  char description[256];
  Status status;
  char status;
  int createdAt;
  int updatedAt;
  int dueDate;
};

typedef enum {
  NOT_DONE,
  DONE,
  IN_PROGRESS,
  OVERDUE
} Status;

struct node {
  struct task *data;
  struct node *next;
};

// these are global variables
struct node *head = NULL;
int currentId = 1;