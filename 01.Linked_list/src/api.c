#include <stdio.h>
#include <stdlib.h>

#include "../include/node.h"

static unsigned int node_count = 0;
static Node* head;
static Node* tail;

void addList(Node* node) {
  if (node_count == 0) {
    head = node;
  } else {
    tail->next = node;
  }
  tail = node;
  node_count++;
}

void printList() {
  Node* temp = head;
  int count = node_count;

  while (count > 0) {
    printf("%d ", temp->value);
    if (head->next == NULL) {
      printf("\n");
      break;
    } else {
      temp = temp->next;
    }
    count--;
  }
}
