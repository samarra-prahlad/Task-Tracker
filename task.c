// this is where the tasks will be set up
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "task.h"

struct task *addTask (char *description);
bool deleteTask(int id);


struct task *addTask (char *description) {
  struct task *newTask = malloc(sizeof(struct task));
  if (newTask == NULL) {
    printf("memory allocation failed\n");
    return NULL;
  }
  newTask->id = currentId++;
  strncpy(newTask->description, description, sizeof(newTask->description) - 1);
  newTask->description[sizeof(newTask->description) - 1] = '\0';
  newTask->status = NOT_DONE;

  struct node *newNode = malloc(sizeof(struct node));
  if (newNode == NULL) {
    printf("Memory allocation failed");
    return NULL;
  }
  
  newNode->data = newTask;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
  } else {
    // assigning the current node to be the top of the linked list to start
    // traversal
    struct node *current = head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = newNode;
  }
  return newTask;
}

bool deleteTask(int id) {
  return 0;
}

struct task updateTask(int id) {

}

struct task updateTaskStatus(int id) {

}

struct task listAllTasks(int id) {

}

struct task listCompletedTasks(int id) {

}

struct task listIncompleteTasks(int id) {

}

struct task listInProgressTasks(int id) {

}