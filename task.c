// this is where the tasks will be set up
#include <stdio.h>
#include <stdbool.h>
#include "task.h"

struct task addTask (char *description);
bool deleteTask(int id);


struct task addTask (char *description) {
  struct node *head = malloc(sizeof(struct node));

  if (head == NULL) {
    
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