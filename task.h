// this is the header file for the task
struct Task {
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
  int data;
  struct node *next;
};